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

// JD: This sketch is generally in the right direction, but I do have some
//     points to raise at this stage (some of these issues are also already
//     in your code above, so take note):
//
//     - Remember that fork *creates a new process*.  So you should put
//       some thought into precisely when a new process is actually needed.
//       Certainly you need a new process when executing a command, because
//       otherwise that executable will wipe out the current code.  But do
//       you need a process to cd?  To make your secret system call?
//
//     - Related is the issue of the &.  When should you catch it?  And if
//       you do catch it, how should it affect command execution?  This
//       relates to my third caution, which is...
//
//     - Make sure you fully understand what the exec function needs for
//       its arguments, and process the user's command input accordingly.
//       Remember, the way the & works, it affects solely whether the
//       launched process runs concurrently.  It is not officially an
//       "argument" that the new executable receives.
//
//     One last thing I guess---In the end, you are modeling the behavior
//     of bash.  So, when in doubt, ask WWBD?  :)  Try something in bash
//     to see what it does, and that will give you a sense for what your
//     shell needs to do.
/* 

main(){
infinite loop 
    prompt for input
    foo=fork()
    if(foo>0) //parent process
        if they used backgrounding &
            continue. <-- this is the "keyword" continue, go to next loop iteration
        else if they didn't "background," this is a normal command
            waitpid(foo,0,0); //this is a system call in C.
            //              try "man waitpid" in terminal to learn about waitpid
    else if(foo==0) //child process
        do the command (involves execvp, looking for pipes)
    else //fork returned a negative value
        printf("fork error\n");
        return -1; //indicates error
return 0 //indicates success
} //end main() */
