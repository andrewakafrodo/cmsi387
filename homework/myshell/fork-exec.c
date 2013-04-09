#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_TKNS 10
#define MAX_CMD_LENGTH 100

/**
 *	This method "tokenizes" the input given from the user. It does not include
 *  spaces and new line characters. This stores everying in a an array of array of
 *  characters. This method was outlined by stackoverflow user Hussain_J6! Thanks!
 */

int tokenize_commands (char *commands, char *arguments[]) {
	int index = 0;
	int waitPresent = 0;	
	char *delim = " \n";
	char *individualArgs = strtok(commands, delim);

	while (individualArgs != NULL) {
		arguments[index] = individualArgs;
		individualArgs = strtok(NULL, delim);
		index++;
	}

	arguments[index] = NULL;
	if (waitPresent) return 1;
	return 0;
}

/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */

int main (void) {
    
    /* Strings to hold the commands to run. */
    char commands[MAX_CMD_LENGTH];
    char *arguments[MAX_TKNS];

	/* Variables to compare by. */
	int waitResult = 0;

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
	    waitResult = tokenize_commands(commands, arguments);

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
		       	execvp(arguments[0], arguments);
		    } else {
		        /* Parent process. */ 
		        int result;
				if (!waitResult) wait(&result);
		    }
		}
	}
    return 0;
}
