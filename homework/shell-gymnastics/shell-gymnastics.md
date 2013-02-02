# SHELL GYMNASTICS

## Process Survey

#### 1. What root-owned processes are running?

I saw many processes that I wasn't to sure I knew about. Many of them come from the `/usr/sbin/` or from `/System/Library`. I will be honest because I don't really understand most of these, but I do understand how to issue the command!

Here is the command I issued for this question.

    frodosamoa:Desktop andrewkowalczyk$ ps -u root

Here is the text dump from the command.

	UID   PID TTY           TIME CMD
	  0     1 ??         0:14.45 /sbin/launchd
	  0    10 ??         0:02.33 /usr/libexec/kextd
	  0    11 ??         0:01.03 /usr/libexec/UserEventAgent -l System
	  0    12 ??         0:02.57 /usr/sbin/notifyd
	  0    13 ??         0:15.72 /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonC
	  0    14 ??         0:00.28 /usr/sbin/diskarbitrationd
	  0    15 ??         0:09.55 /usr/libexec/configd
	  0    16 ??         0:01.96 /usr/sbin/syslogd
	  0    18 ??         0:01.17 /usr/sbin/ntpd -c /private/etc/ntp-restrict.conf -n -g -p /var/run/ntpd.pid -f 
	 -2    20 ??         0:00.54 /usr/libexec/warmd
	  0    23 ??         0:00.09 /sbin/SystemStarter
	  0    25 ??         0:00.10 /usr/libexec/stackshot -t
	  0    26 ??         0:01.08 /usr/sbin/securityd -i
	  0    29 ??         0:00.46 /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/Supp
	  0    30 ??         0:02.94 /System/Library/CoreServices/powerd.bundle/powerd
	  0    33 ??         0:08.03 /usr/libexec/opendirectoryd
	  0    35 ??         0:54.58 /System/Library/Frameworks/CoreServices.framework/Frameworks/Metadata.framework
	501    38 ??         0:03.82 /System/Library/CoreServices/loginwindow.app/Contents/MacOS/loginwindow console
	  0    40 ??         0:00.12 /usr/sbin/KernelEventAgent
	  0    42 ??         1:50.13 /usr/libexec/hidd
	  0    44 ??         0:00.95 /sbin/dynamic_pager -F /private/var/vm/swapfile
	  0    50 ??         0:00.10 autofsd
	  0    52 ??         0:07.00 /System/Library/PrivateFrameworks/ApplePushService.framework/applepushserviced
	  0    53 ??         0:00.14 /usr/sbin/aosnotifyd
	  0    56 ??         0:24.51 /System/Library/CoreServices/coreservicesd
	  0    57 ??         0:00.31 /usr/sbin/distnoted daemon
	 88    90 ??         9:09.40 /System/Library/Frameworks/ApplicationServices.framework/Frameworks/CoreGraphic
	  0    97 ??         0:00.02 /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/CVMServer
	  0   106 ??         0:00.02 /System/Library/CoreServices/logind
	  0   219 ??         0:00.06 /usr/sbin/filecoordinationd
	  0 10867 ??         0:00.01 /usr/libexec/taskgated -p -s

#### 2. What processes are running on your account?

When I issued the command to get my processes, I saw some apps that I was running like iPhoto, smcFanControl, Alfred, and Dropbox. There were other things running like the dock and the bash window.

Here is the command I issued for this question.

    frodosamoa:Desktop andrewkowalczyk$ ps -u andrewkowalczyk

Here is the text dump from the command.

	UID   PID TTY           TIME CMD
	501   113 ??         0:06.23 /sbin/launchd
	501   119 ??         0:01.31 /usr/libexec/UserEventAgent -l Aqua
	501   121 ??         0:03.24 /usr/sbin/distnoted agent
	501   126 ??         0:07.03 /System/Library/CoreServices/Dock.app/Contents/MacOS/Dock
	501   127 ??         0:00.71 /System/Library/CoreServices/talagent
	501   128 ??         0:49.37 /System/Library/CoreServices/SystemUIServer.app/Contents/MacOS/SystemUIServer
	501   129 ??         0:00.01 /usr/sbin/pboard
	501   135 ??         0:07.38 /System/Library/Frameworks/ApplicationServices.framework/Frameworks/ATS.framewo
	501   139 ??         0:00.33 com.apple.dock.extra
	501   144 ??         0:00.82 /Applications/iPhoto.app/Contents/Library/LoginItems/PhotoStreamAgent.app/Conte
	501   145 ??         0:00.01 /usr/libexec/warmd_agent
	501   149 ??         0:00.77 /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/Contents/MacOS/i
	501   154 ??         0:00.90 /System/Library/CoreServices/AirPort Base Station Agent.app/Contents/MacOS/AirP
	501   174 ??         0:00.78 /Applications/gfxCardStatus.app/Contents/MacOS/gfxCardStatus -psn_0_57358
	501   176 ??         1:13.90 /Applications/smcFanControl.app/Contents/MacOS/smcFanControl -psn_0_65552
	501   177 ??         0:01.74 /Applications/Alfred.app/Contents/MacOS/Alfred -psn_0_69649
	501   178 ??         0:34.46 /Applications/Dropbox.app/Contents/MacOS/Dropbox -psn_0_73746
	501   201 ??         0:01.01 /System/Library/Services/AppleSpell.service/Contents/MacOS/AppleSpell -psn_0_10
	501   209 ??         0:02.74 /Library/Application Support/Adobe/OOBE/PDApp/UWA/AAM Updates Notifier.app/Cont
	501   234 ??        32:25.49 /System/Library/Image Capture/Support/Image Capture Extension.app/Contents/MacO
	501   235 ??         0:04.87 /Library/Image Capture/Support/LegacyDeviceDiscoveryHelpers/CIJScannerRegister.
	  0   237 ??         0:00.91 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
	  0   238 ??         0:05.50 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
	501   239 ??         0:03.42 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
	501   933 ??         1:31.36 /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal -psn_0_565386
	501   957 ??         0:00.17 /usr/libexec/lsboxd
	501  1650 ??         0:52.35 /Applications/Sublime Text 2.app/Contents/MacOS/Sublime Text 2 -psn_0_831691
	501  4900 ??         0:00.07 /usr/bin/ssh-agent -l
	501  7829 ??         1:07.09 /System/Library/Frameworks/CoreServices.framework/Frameworks/Metadata.framework
	501  9367 ??         0:31.84 /System/Library/CoreServices/Finder.app/Contents/MacOS/Finder
	  0  8744 ttys000    0:00.10 login -pf andrewkowalczyk
	501  8745 ttys000    0:00.45 -bash
	  0 10847 ttys000    0:00.00 ps -u andrewkowalczyk


#### 3. Run a typical working set of applications (e.g., web browser, chat program, text editor, etc.). Which application is using the most real memory? The most virtual memory?

I opened up many different applications and The application that was using the most real memory was `kernal_task`. The program that was using the most virtual memory was also `kernel_task`.

Here is the commands I issued for this question.

    frodosamoa:Desktop andrewkowalczyk$ top
    frodosamoa:Desktop andrewkowalczyk$ top -o rsize
    frodosamoa:Desktop andrewkowalczyk$ top -o vsize

Here is the text dump from the command.

	Processes: 92 total, 5 running, 10 stuck, 77 sleeping, 520 threads                                    14:33:34
	Load Avg: 1.90, 1.89, 1.81  CPU usage: 25.0% user, 7.7% sys, 67.92% idle
	SharedLibs: 101M resident, 0B data, 14M linkedit.
	MemRegions: 16357 total, 1099M resident, 53M private, 519M shared.
	PhysMem: 727M wired, 1600M active, 674M inactive, 3001M used, 961M free.
	VM: 207G vsize, 1346M framework vsize, 1555468(62) pageins, 121039(0) pageouts.
	Networks: packets: 6680591/5047M in, 829554/153M out. Disks: 480685/9888M read, 269688/7853M written.
	
	PID    COMMAND      %CPU TIME     #TH  #WQ  #POR #MREG RPRVT  RSHRD  RSIZE  VPRVT  VSIZE  PGRP  PPID  STATE
	0      kernel_task  11.1 31:45.62 80/4 0    2    650+  17M+   0B     349M+  79M+   5141M+ 0     0     running
	11287  installd     0.0  12:37.53 3    2    67+  324   113M   6988K  223M   250M   2629M  11287 1     sleeping
	11961  iTunes       2.1  00:06.94 23   2    344  580   181M+  44M    218M+  230M   2719M  11961 113   stuck
	11949  Adobe Photos 0.9  00:04.53 18   1    281  819   70M    40M    137M   133M   2727M  11949 113   sleeping
	234    Image Captur 19.3 40:14.81 5    3    96+  220+  130M+  25M    134M+  179M+  2585M+ 234   113   sleeping
	35     mds          0.3  01:20.36 8    6    177  254   68M    11M    98M    291M   2730M  35    1     sleeping
	90     WindowServer 3.9  10:41.27 7    1    358- 1654- 12M+   75M-   95M-   65M+   3226M- 90    1     sleeping
	11963- iPhoto       69.6 00:04.58 26/1 14/1 362+ 748+  64M+   61M+   95M+   154M+  1051M+ 11963 113   running
	11970- iMovie       1.9  00:04.76 14   10   336  832   56M+   65M-   92M+   179M+  924M   11970 113   stuck
	11236  App Store    0.0  00:40.71 9    1    196  726   52M    60M    71M    409M   3677M  11236 113   sleeping
	9367   Finder       4.3  01:49.16 10   5    256  697   23M    83M    56M    92M    2663M  9367  113   sleeping
	178-   Dropbox      0.8  00:52.60 22   1    115  543   29M    31M    40M    142M   793M   178   113   sleeping
	10863- TextWrangler 0.2  00:50.10 4    1    133  352   15M    40M    35M    50M    742M   10863 113   sleeping
	128    SystemUIServ 0.1  00:54.84 4    2    190  391   29M    51M    34M    133M   2602M  128   113   sleeping
	933    Terminal     1.5  01:56.11 5    1    124  309-  16M-   40M    34M-   35M-   2498M- 933   113   sleeping
	11951  iCal         0.0  00:01.39 4    1    144- 244-  14M-   41M    32M-   58M-   2493M- 11951 113   sleeping
	126    Dock         0.9  00:21.56 3    1    207  637   14M    50M    30M    34M    2515M  126   113   sleeping
	56     coreservices 0.4  00:28.55 5    2    343+ 597+  8436K+ 23M    26M+   48M+   2459M+ 56    1     stuck
	38     loginwindow  0.0  00:04.27 4    3    289  226   9748K  44M    24M    75M    2509M  38    1     sleeping
	11238  storeagent   0.0  03:35.23 8    1    129  152   9424K  9376K  23M    171M   3477M  11238 113   sleeping
	177    Alfred       0.0  00:02.87 3    1    126  163   9432K  44M    21M    55M    2495M  177   113   sleeping
	144    PhotoStreamA 3.8  00:00.90 5    3    125+ 138   8120K  27M-   18M+   56M    2458M  144   113   sleeping
	11884  mdworker     0.0  00:12.90 4    2    66   110   6600K  10M    18M    41M    2440M  11884 11846 stuck
	11909  mdworker     0.3  00:02.87 4/1  1    59   93    4640K  10M    16M+   52M    2442M  11909 113   running
	11877  helpd        0.3  00:00.61 12/1 7    85+  123   8264K+ 5332K  13M+   65M+   2443M  11877 113   running
	176    smcFanContro 0.0  01:22.88 3    1    118  127   6132K  32M    12M    53M    2470M  176   113   sleeping
	174    gfxCardStatu 0.0  00:00.85 3    1    143  163   4292K  35M    12M    38M    2472M  174   113   sleeping
	149    imagent      0.0  00:00.81 5    2    102  120   4444K  5424K  12M    45M    2435M  149   113   stuck
	139    com.apple.do 0.0  00:00.35 3    2    99   117   3164K  28M    11M    52M    2458M  139   1     stuck
	119    UserEventAge 0.0  00:01.42 4    2    115  145   5508K  8340K  10M    52M    2433M  119   113   stuck
	26     securityd    0.1  00:01.21 4    1    111  68    7480K  4768K  10M+   36M    2430M  26    1     sleeping
	13     fseventsd    0.1  00:37.35 30   1    140  109   7456K  216K   10M    142M   2503M  13    1     sleeping
	33     opendirector 0.0  00:08.79 12   12   109  123   4784K  4680K  9824K  49M    2434M  33    1     sleeping
	209-   AAM Updates  0.0  00:02.75 4    2    89   185   4808K  32M    9796K  51M    707M   209   113   sleeping
	201    AppleSpell   0.0  00:01.45 3    2    53   73    2624K  8392K  9772K  43M    2440M  201   113   sleeping
	11     UserEventAge 0.0  00:01.07 4    2    105  140   3804K  5116K  8880K  63M    2442M  11    1     sleeping
	52     applepushser 0.1  00:07.13 3    1    78   68    2888K  5236K  7776K  43M    2428M  52    1     sleeping
	235    CIJScannerRe 0.0  00:05.36 5    1    99-  85    2828K  25M    7616K  52M    2458M  235   113   sleeping
	127    talagent     0.0  00:00.81 2    1    93   89    2592K  25M    7536K  52M    2449M  127   113   sleeping
	11959  xpchelper    0.0  00:00.51 2    2    44   66    3204K  4780K  7476K  43M    2427M  11959 1     sleeping
	121    distnoted    0.3  00:04.64 7    6    118+ 68+   6488K+ 240K   7312K+ 47M+   2416M+ 121   113   sleeping
	135    fontd        0.0  00:09.23 4    2    94   208   3932K  8724K  6608K  44M    2468M  135   113   sleeping
	36     mDNSResponde 1.9  07:01.85 3    1    60   71    4728K  252K   6536K  60M    2421M  36    1     sleeping
	15     configd      0.2  00:11.17 8    3    281  153   2356K  4768K  6024K  32M    2442M  15    1     sleeping
	12003- CVMCompiler  0.0  00:00.14 1    0    28+  48+   3000K+ 216K   5820K+ 21M+   594M+  12003 113   sleeping
	957    lsboxd       0.1  00:00.22 3    3    54+  78+   2960K+ 8288K  5396K- 28M+   2431M+ 957   113   sleeping
	12002  VDCAssistant 0.0  00:00.05 5    2    80   85    1096K  4984K  5336K  51M    2432M  12002 1     stuck
	53     aosnotifyd   0.0  00:00.14 2    1    45   55    1108K  4680K  4976K  49M    2426M  53    1     sleeping
	10     kextd        0.0  00:02.36 2    1    58   60    2792K  220K   4808K  35M    2411M  10    1     sleeping
	12009  XPCKeychainS 0.0  00:00.05 3    3    38   69+   1064K  252K   4692K  52M    2413M  12009 1     sleeping
	131    coreaudiod   0.0  00:30.05 3    1    261  81    2236K  6068K  4456K  51M    2430M  131   1     sleeping
	238-   dbfseventsd  0.1  00:23.81 1    0    9    25    4220K  336K   4408K  12M    591M   178   237   sleeping
	11960  AdobeCrashDa 0.0  00:00.02 1    0    24   32    588K   216K   4044K  19M    2379M  11960 11949 sleeping
	20     warmd        0.0  00:00.68 5    4    41+  57+   2524K+ 220K   3840K+ 44M+   2412M+ 20    1     sleeping
	12008- CS5ServiceMa 0.0  00:00.05 6    3    81   99+   1028K  25M    3712K  53M    658M   12008 1     stuck
	11952  taskgated    0.0  00:00.05 3    1    39   56    1788K  4892K  3672K  47M    2423M  11952 1     sleeping


#### 4. Login to my.cs.lmu.edu. Who else, other than root and you, has processes running at that time?

After logging on, I saw that the users `sverhass` and `awon` were also logged on. The rest of the processes seemed like system processes.

Here is command I issued for this question.

    akowalc1@ab201:~$ ps aux | grep -v "akowalc1" | grep -v "root"

Here is the text dump from the command.

    USER       PID %CPU %MEM    VSZ   RSS TTY      STAT START   TIME COMMAND
    syslog     657  0.0  0.1 185760  5576 ?        Sl    2012  10:49 rsyslogd -c5
    statd      666  0.0  0.0  25612  1492 ?        Ss    2012   0:00 rpc.statd -L
    102        677  0.0  0.0  24160   368 ?        Ss    2012   0:00 dbus-daemon --system --fork --activation=upstart
    daemon     803  0.0  0.0  16784   400 ?        Ss    2012   0:00 atd
    postfix   1057  0.0  0.0  27224  1732 ?        S     2012   0:06 qmgr -l -t fifo -u
    www-data  1105  0.0  0.3 204384 12424 ?        S    Jan27   0:00 /usr/sbin/apache2 -k start
    www-data  1108  0.0  0.3 204376 12452 ?        S    Jan27   0:00 /usr/sbin/apache2 -k start
    www-data  1111  0.0  0.3 204384 12488 ?        S    Jan27   0:00 /usr/sbin/apache2 -k start
    1000      1160  0.0  0.2  29988  9016 tty1     S     2012   0:00 -bash
    1000      1288  0.1  0.0  22404  2396 tty1     S+    2012 378:17 top
    postfix   2824  0.0  0.0  27012  1604 ?        S    16:02   0:00 pickup -l -t fifo -u -c
    sverhass  2981  0.0  0.0  73348  1864 ?        S    16:26   0:00 sshd: sverhass@pts/1
    sverhass  2982  0.0  0.2  30200  9512 pts/1    Ss+  16:26   0:00 -bash
    www-data  3089  0.0  0.2 202656  9056 ?        S    16:26   0:00 /usr/sbin/apache2 -k start
    mysql     4807  0.0  0.7 236892 28684 ?        Ssl   2012  17:31 /usr/sbin/mysqld
    www-data  6635  0.0  0.3 203856 12168 ?        S    Jan29   0:00 /usr/sbin/apache2 -k start
    awon      7957  0.0  0.0  26904  1236 ?        Ss   Jan29   0:00 SCREEN
    awon      7958  0.0  0.1  25988  5176 pts/0    Ss+  Jan29   0:00 /bin/bash
    awon      9563  0.0  0.0  26904  1240 ?        Ss   Jan29   0:00 SCREEN
    awon      9564  0.0  0.1  25988  5172 pts/6    Ss+  Jan29   0:00 /bin/bash
    www-data 12824  0.0  0.3 204092 12420 ?        S    Jan27   0:00 /usr/sbin/apache2 -k start
    mongodb  13594  0.0  0.4 305244 19544 ?        Ssl   2012 139:53 /usr/bin/mongod --config /etc/mongodb.conf
    postfix  22806  0.0  0.0  38092  3236 ?        S     2012   0:02 tlsmgr -l -t unix -u -c
    www-data 28822  0.0  0.2 203564 11780 ?        S    13:41   0:00 /usr/sbin/apache2 -k start
    www-data 28952  0.0  0.2 202664  9212 ?        S    13:42   0:00 /usr/sbin/apache2 -k start
    www-data 28954  0.0  0.2 203820 12012 ?        S    13:42   0:00 /usr/sbin/apache2 -k start
    www-data 32657  0.0  0.2 203820 12024 ?        S    01:00   0:00 /usr/sbin/apache2 -k start

## I/O and File "Gymnastics"

#### 1. Create an `ssh` tunnel from this computer to a service that is visible from another `ssh`-capable computer (but, of course, not necessarily visible from the computer you’re using). Then, access that service from your computer through localhost and the tunneled port number.
* Submit a screenshot of your successful connection to the remote service via the tunnel.


#### 2. Run something lengthy (`ping`, `vm_stat/vmstat`, loooooong download, finding the quadrillionth prime number…) inside `screen`; logout of that computer entirely, login again, and reconnect to screen to prove to yourself that the process has continued to run without interruption.
* Submit screenshots of your long-running command before you logged out, then after you reconnected to it.

![Screen Example](/homework/shell-gymnastics/ScreenExample1.png)
![Screen Example](/homework/shell-gymnastics/ScreenExample2.png)
![Screen Example](/homework/shell-gymnastics/ScreenExample3.png)

#### 3. Learn how to use `du`, which tells you how much disk space you’re using in a given directory.

* Which first-level subdirectory in `~` is taking up the most space? Submit the command that includes this information in as little output as possible.
	
	frodosamoa:~ andrewkowalczyk$ du -sh *
	  0B    Applications
	 29G    Desktop
	1.0G    Documents
	 18G    Downloads
	262M    Dropbox
	 25G    Library
	368K    Movies
	232G    Music
	 54G    Pictures
	  0B    Public
	 24K    Sites
	 
My `~/Music/` folder is taking up the most space with 232 gigabytes of disk space.

* Submit a command that displays only the disk usage of directories matching some regular expression.  *Hint:* `|`.

	frodosamoa:Music andrewkowalczyk$ du -sh * | grep -i heart
	2.9M    Braveheart Soundtrack
	 71M    Heart
	150M    Tom Petty & The Heartbreakers

I went into my music folder and looked for the disk space of artists who had "heart" in their name, case-insensitive.

#### 4. On a Keck lab machine, create a file within `~`. Run `ls -i` to determine that file’s inode number. Move this file to another directory inside  `~`, then move it to `/tmp`, then move it back to your home directory. After each move, use `ls -i` to see its inode number.

* Submit the output of `ls -i` both right after you created the file and after each file move.

* Submit the piped commands that you would type in order to filter out all lines of `ls -i`’s output except for the file that you created.

#### 5. Pop a few storage devices (CD, DVD, flash drive, network drive, etc.) into your computer. Figure out the mount points for each device.
* Submit the output provided by the command (or a screenshot showing the information, if you used a GUI tool).