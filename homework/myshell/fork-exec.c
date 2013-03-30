#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * This program demonstrates the use of the fork() and exec()
 * functions.
 */
int main () {
    /* String to hold the command to run. */
    char command[256];
	char argument[256];
	char and = '&';
    printf("Enter the command to run: ");
    scanf("%s", command);//, argument);
	printf("%s\n", command);
	//printf("%s\n", argument);


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
	    }
    } else {
        /* Parent process. */
        int result;
        wait(&result);
        printf("All done; result = %d\n", result);
    }

    return 0;
}

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