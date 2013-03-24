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
2. Can your shell run scripts? Why or why not?
3. Does `CTRL-D` exit your shell? Why or why not?

Commit and push your answers to your git repository as a file in some widely-readable document format within the `homework/myshell` directory.