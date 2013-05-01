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
 *  characters.
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
	return 0;
}
/*
void changeDirectory (char *directory) {
	char *dir =
	if (directory == NULL) {
		chdir((const char *) );
	} else if (strcmp(directry, "..") == 0) {
		chdir()
	}
}*/

/**
 * This method removes trailig spaces in a string.
 */

/*void removeTrailingSpaces(char *command) {
	char *end;

 	while(isspace(*command)) command++;
 	//if (*command == 0) return command;

 	end = str + strlen(str) - 1;
 	while (end > command && ispace(*command)) command--;

 	*(command+1) = '\0';


 }*/

/**
 * This main method demonstrates the use of the fork() and exec()
 * functions.
 */

int main (void) {  
    /* Strings to hold the commands to run. */
    char commands[MAX_CMD_LENGTH];
    char *arguments[MAX_TKNS];

    /* Strings for the basic shell (makes it look pretty). */
	char *prompt = "=> ";
	char *welcome = "Welcome to a basic shell, enter your commands.\n";

	/* Let us welcome the user. */
	fputs(welcome, stdout);

	while (!feof(stdin)) {
		/* Variables to compare by. */
		int waitResult = 0;

		/* Put the prompt string to standard out */
		fputs(prompt, stdout);

		/* Gets the command from standard input. */
	    fgets(commands, sizeof(commands), stdin);

	    /* Stoes the length of commands for ease of use. */
	    int commandLength = strlen(commands);

	    /* Set the last character to a null terminating zero */
		commands[commandLength-1] = '\0';
		
		/* Remove the remaining trailing spaces. */
		while (commands[commandLength - 2] == ' ') {
			commands[commandLength - 2] = '\0';
			commandLength--;
		}

		/* If the length of out command is greater than zero, then let us
		   store execute the command. If not, skip this whole loop. */
		if (strlen(commands) != 0) {
						printf("%s", "we are hereee again\n");
			/* Check for '&' character. If so, remove it. */
			//TODO

	    	/* Method to store command and their option(s). */
	    	tokenize_commands(commands, arguments);

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
					//if (!waitResult)
					wait(&result);
		    	}
			}
		}
	}
    return 0;
}