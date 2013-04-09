#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_CMDS 10

// Look up:
// - strtok  null terminating check
// - isspace

/**
 *	This method "tokenizes" the input given from the user. It does not include
 *  spaces and new line characters. This stores everying in a an array of array of
 *  characters. This method was outlined by stackoverflow user Hussain_J6! Thanks!
 */

int tokenize_commands (char *commands, char *arguments[]) {
	int index = 0;
	int i = 0;
	int waitPresent = 0;	

	/* While there are characters left. */
	while (*chars != '\0') {

		/* More than the maximum amount of "commands"? Break. */
		if (index == MAX_CMDS) break;

		/* New line character? Break. */
		if (*chars == '\n') break;

		/* If we have a space, time to finish storing our command. */
		if (*chars == ' ') {

		} else {
			
		}
		chars++;
	}

	/* Last element will be null, for potential ease of use with execvp(). */
	//arguments[index] = NULL;
	if (waitPresent) {
    	return 0;
	} else {

	}
}


/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */

int main (void) {
    
    /* Strings to hold the commands to run. */
    char commands[100];
    char *arguments[MAX_CMDS];

	/* Variables to compare by. */
	char *wait = "&";
	int waitPresent = 0;

    /* Strings for the basic shell (makes it look pretty). */
	char *prompt = "=> ";
	char *welcome = "Welcome to a basic shell, enter your commands.\n";

	/* Let us welcome the user. */
	fputs(welcome, stdout);

	while (!feof(stdin)) {
		/* Put the prompt string to standard out */
		fputs(prompt, stdout);

		/* Gets the command from standard input. */
	    fgets(commands, sizeof(commands), stdin);

	    /* Method to store command and their option(s). */
	    waitPresent = tokenize_commands(commands, arguments);
		
		/* Checks if command is special case. */
		if (strcmp("cd", arguments[0]) == 0) {
			chdir(arguments[1]);
		} else if (strcmp("exit", arguments[0]) == 0) {
			return 1;
		} else if (strcmp("secret-system-call", arguments[0]) == 0) {
	        long int result = syscall(350);
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
				if (!waitPresent) wait(&result);
		    }
		}
	}
    return 0;
}
