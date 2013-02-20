/**
<<<<<<< HEAD
=======
 * 64BIT
>>>>>>> added changes
 * This program demonstrates invocation of the rmdir
 * system call (40) using the syscall function.
 */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>  
  

int main(int argc, char *argv[]) {

<<<<<<< HEAD
  // I use command-line arguments for the command.

  int result = syscall(40, argv[1]);
=======
  int result = syscall(84, argv[1]);
>>>>>>> added changes

  if (result == -1) {
    printf("rmdir: failed to remove `%s`: %s\n", argv[1], strerror(errno));
  }
}
