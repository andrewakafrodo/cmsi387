#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_CMDS 64

/**
 *	This method "tokenizes" the input given from the user. It does not include
 *  spaces and new line characters. This stores everying in a 
 */

int analyze_commands (char *commands, char *pointer_array[MAX_CMDS]) {
	char *chars = commands, buffer[100] = {0};
	int index = 0, space = 0, i;
	strncat(chars, " ", 1);	

	/* While there are characters left... */
	while (*chars != '\0') {

		/* More than the maximum amount of "commands"? Break. */
		if (index == MAX_CMDS) break;

		/* If we have a new line, continue on! */
		if (*chars == '\n') {
			chars++;
			continue;
		}

		/* If we have a space, time to finish storing our command. */
		if (*chars == ' ') {
			if (space == 0) {
				pointer_array[index] = (char *)malloc(sizeof(char)*strlen(buffer)+1);
				strncpy(pointer_array[index], buffer, strlen(buffer));
				strncat(pointer_array[index], "\0", 1);
				bzero(buffer, sizeof(buffer));
				index++;
			}
			space = 1;
		} else {
			space = space > 0 ? 0 : space;
			strncat(buffer, chars, 1);
		}
		chars++;
	}

	/* Last element will be null, for ease of use with execlp(). */
	pointer_array[index] = NULL;
    return 0;
}

/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */

int main (void) {
    
    /* Strings to hold the commands to run. */
    char commands[100];
    char *pointer_array[MAX_CMDS];

    /* Strings for the basic shell (makes it look pretty). */
	char *prompt = "=> ";
	char *welcome = "Welcome to a basic shell, enter your commands.\n";

	/* Let us welcome the user. */
	fputs(welcome, stdout);

	while (!feof(stdin)) {
		/* Put the prompt string to standard out */
		fputs(prompt, stdout);

		/* Gets the commands from standard input. */
	    fgets(commands, sizeof(commands), stdin);

	    /* Method to store commands and their options. */
	    analyze_commands(commands, pointer_array);

		/* Checks if commands are special case. */
		if (strcmp("cd", pointer_array[0]) == 0) {
			int result = chdir(pointer_array[1]);
		} else if (strcmp("exit", pointer_array[0]) == 0) {
			exit(0);
		} else if (strcmp("secret-system-call", pointer_array[0]) == 0) {
	        int result = syscall(272);
		} else {
		    /* Variable that will store the fork result. */
		    pid_t pid;

		    /* Perform the actual fork. */
		    pid = fork();

			if (pid < 0) {
		        /* Error condition. */
		        fprintf(stderr, "Fork failed\n");
		        return -1;
		    } else if (pid == 0) {
		        /* Child process. */
		       	execvp(pointer_array[0], pointer_array);
		    } else {
		        /* Parent process. */ 
		        int result;
		        wait(&result);
		    }
		}
	}
    return 0;
}


