#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_CMDS 10

/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */

int main (void) {
    
    /* Strings to hold the commands to run. */
    char commands[100];
    char *pointer_array[MAX_CMDS];
    printf("Enter the commands to run: ");
    fgets(commands, sizeof(commands), stdin);
    analyze_commands(commands, pointer_array);

    /* Variable that will store the fork result. */
    pid_t pid;

    /* Perform the actual fork. */
    pid = fork();
	if (pid > 0) {
        //if (backgound) {

        //} else {   not background
            //waitpid(pid, 0, 0);
        //}
	} else if (pid < 0) {
        /* Error condition. */
        fprintf(stderr, "Fork failed\n");
        return -1;
    } else if (pid == 0) {

        /* Child process. 
		if (strcmp("cd", pointer_array[0]) == 0) {
			execlp(pointer_array[0], pointer_array[1], NULL);
		} else */

		if (strcmp("&", pointer_array[0]) == 0) {
		    printf("We have a &\n");
	    } else if (strcmp("secret-system-call", pointer_array[0]) == 0) {
            int result = syscall(272);
		} else {
        	execvp(pointer_array[0], pointer_array);

            //if (we had an and, add the fork?)
            //rinse and repeat?
	    }
    } else {
        /* Parent process. */ 
        int result;
        wait(&result);
        printf("All done; result = %d\n", result);
    }
	
    return 0;
}

int analyze_commands (char *commands, char *pointer_array[MAX_CMDS]) {
	char *chars = commands, buffer[100] = {0};
	int index = 0, space = 0, i;
	strncat(chars, " ", 1);	

	while (*chars != '\0') {

		if (index == MAX_CMDS) break;
		if (*chars == '\n') {
			chars++;
			continue;
		}
		if (*chars == ' ') {
			if (space == 0) {
				pointer_array[index] = (char *)malloc(sizeof(char) * strlen(buffer) + 1);
				strncpy(pointer_array[index], buffer, strlen(buffer));
				printf("%s\n", pointer_array[index]);
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

	pointer_array[index] = NULL;
    return 0;
}