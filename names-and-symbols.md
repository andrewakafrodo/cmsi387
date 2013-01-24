# NAMES AND SYMBOLS

### 1. /dev/null

/dev/null on Unix-like operating systems is a special file that discards all data written to it. It is an infinite data source and data sink. Any data written to /dev/null shall be discarded. Any read from /dev/null shall always return end-of-file (EOF).

Source: http://pubs.opengroup.org/onlinepubs/000095399/basedefs/xbd_chap10.html

### 2. ~

In the Bash shell, there are a few variables that are prefixed with "~". This is used to expand several specific pathnames: home directories, the current/previous working directory, or directories from the directory stack.

Source: http://www.thegeekstuff.com/2010/06/bash-tilde-expansion/

### 3. .bash_profile

~/.bash_profile is a script that might be executed when bash is invoked and only gets executed during a login shell. When you login (type username and password) via console, either sitting at the machine, or remotely via ssh: .bash_profile is executed to configure your shell before the initial command prompt.

Source: http://www.joshstaiger.org/archives/2005/07/bash_profile_vs.html

### 4. <

This metacharacter, which separates words when it is unquoted, can be used for redirecting input. This symbol would feed input from the program, file, etc. after it into the the program, file, etc. before it.

Source: http://www.gnu.org/software/bash/manual/bashref.html

### 5. >

This metacharacter, which separates words when it is unquoted, can be used for redirecting output.

Source: http://www.gnu.org/software/bash/manual/bashref.html

### 6. <<

This symbol can be used for shell arithmetic. This would be the left bitwise shift.

Source: http://www.gnu.org/software/bash/manual/bashref.html

### 7. >>

This metacharacter, which separates words when it is unquoted, can be used for appending redirected output. Redirection of output in this fashion causes the file whose name results from the expansion of word to be opened for appending on file descriptor n, or the standard output (file descriptor 1) if n is not specified. If the file does not exist it is created.

Source: http://www.gnu.org/software/bash/manual/bashref.html

### 8. *

This special pattern character matches any string including the null string. This can be used for invoking a certain command on all files that match a certain filetype, for example "*.java".

### 9. filenames begining with .

Filenames beginning with a '.' or a dot-file, are files that are hidden. They are commonly used for storing user preferences or preserving the state of a utility and are frequently created implicitly by using various utilities.

Sources: http://en.wikipedia.org/wiki/Hidden_file_and_hidden_directory, http://en.wikipedia.org/wiki/Dot-file 

### 10. ||

The double pipe, or logical or, is usually put between two commands and it means that if the exit status of the first command is not 0, then execute the second command. 

Source: http://www.unix.com/shell-programming-scripting/42417-what-does-mean-double-pipe.html