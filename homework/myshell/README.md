# A Shell Of Your Own

Implement your own command-line operating system shell. You may extend the `fork-exec.c` sample program or start from scratch.

In addition to the basic command prompt loop for entering a command then executing it (including its arguments), implement the following two features:

* Let a command ending with & run concurrently with the shell (i.e., just like `bash`).
* Make sure that the cd command works correctly.
* Add an “easter egg” to your shell so that, if the user types `secret-system-call`, it invokes the system call that you added to the kernel in Assignment 0312.

Commit and push your code to your git repository under `homework/myshell`.

# Points to Ponder

Answer the following questions:

1. Why did the `cd` command get special mention in this assignment?

   The `cd` command recieved speical mention due to the fact that for it to work, it must change the parent process. The only way to run this command within the shell (for the given assignment, and for the sake of our sanity) is to use the command `chdir()`. Yet, the `chdir()` function can only modify the environment of the current process. This is to say that each subshell (once the `./aout` is ran) keeps track of all of its varibles, including the current directory. Within the subshell, if one runs a `cd` command followed by a `pwd` command, one can see the current working directory change. But the moment the user exits the subshell, the user is back to the directory of where the `a.out` file is located.

2. Can your shell run scripts? Why or why not?

   My shell can not run scipts. This is the case because at this point my shell only takes a command and its arguments. I can't use anything like `|`, `>`, or `<` for this reason. A script is often more complicated than piping the output of one command into another and can contain anything from if statments to loop and more.

3. Does `CTRL-D` exit your shell? Why or why not?

   `CTRL-D` does exit my shell. It exits because my shell contains a `while` loop looking for an `EOF` (end-of-file). This is fortunate for me because `CTRL-D` on Linux and Mac OS X sends a signal that no more characters are available.

Commit and push your answers to your git repository as a file in some widely-readable document format within the `homework/myshell` directory.