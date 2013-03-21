# CSI: Process

Use long-running invocations (i.e., huge numbers) of the `thread-java` and/or `thread-posix` sample programs to do the following on at least two operating systems chosen from Linux, Mac OS X, and Microsoft Windows. The chosen two can be different for each task, depending on what is possible or easy for each operating system:

1. Invoke the long-running program, send it to the background, and run another program that produces output.Take a screenshot of that big hot terminal mess.

2. Invoke the long-running program, and use a process monitor on the operating system platform to see that program’s threads. How do the different operating systems represent the threads? Note any major similarities and differences, accompanied by screenshot evidence.

**Mac OS**

I invoked `thread-java` on my Mac and I sent the program to the backgorund with the keyboard command `CTRL-Z`. This is seen in the first image. I then opened up my Activity Monitor application to see how many threads the program was using. The second image shows my Activity Monitor window.

![MacTerminal](https://github.com/frodosamoa/csmi387/blob/master/homework/csi-process/MacTerminal.png?raw=true)

![MacActivityMonitor](https://github.com/frodosamoa/csmi387/blob/master/homework/csi-process/MacActivityMonitor.png?raw=true)

**Linux**

I invoked `thread-java` on my Ubuntu virtual machine anf then sent the program to the backgroud with the keyboard command `CRTL-Z`. After this was done, I need to find the process ID number for my specific invokation of `thread-java`. I used `ps -A -mPl | grep java` to do this. From that I was able to see that the process ID number was `2492`. In order to see how many threads my invokation of `thread-java` was using, I need to run this command `ps -o nlwp 2492`. `nlwp` stands for number or light weight processes (i.e. thread count).

![LinuxTerminal](https://github.com/frodosamoa/csmi387/blob/master/homework/csi-process/LinuxTerminal.png?raw=true)