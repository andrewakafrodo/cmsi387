#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

#define MAX_CMDS 10

/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */
// JD: Not much to say here yet...things are still very preliminary.
int main (void) {
    
    /* String to hold the command to run. */
    char commands[100];
    char *pointer_array[MAX_CMDS];

    fgets(commands, sizeof(commands), stdin);
    printf("Enter the command to run: ");
    analyze_commands(commands, pointer_array);

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
        printf("Running...\n");
	    if (strcmp("cd", command) == 0) {
		    //chdir(directory);
	    } else if (strchr(command, and) != NULL) {
		    printf("We have a &\n");
	    //} else if (strcmp("secret-system-call", command) == 0) {

		} else {
        	execlp(command, command, NULL);

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
} //end main()