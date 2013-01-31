# SHELL GYMNASTICS

### Process Survey

1. What root-owned processes are running?

Here is command I issued for this question.


Here is the text dump from the command.

    root              775   0.0  0.0  2463364   2060   ??  Ss    2:55PM   0:00.01 /usr/sbin/ocspd
    root              238   0.0  0.1   604840   3996   ??  S     2:32PM   0:01.36 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
    root              237   0.0  0.0   596648    380   ??  S     2:32PM   0:00.21 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
    root              219   0.0  0.0  2467940   1872   ??  Ss    2:32PM   0:00.01 /usr/sbin/filecoordinationd
    root              106   0.0  0.0  2459104   1768   ??  Ss    2:31PM   0:00.01 /System/Library/CoreServices/logind
    root               97   0.0  0.0  2441388   1020   ??  Ss    2:31PM   0:00.01 /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/CVMServer
    root               57   0.0  0.0  2467832   1664   ??  Us    2:31PM   0:00.08 /usr/sbin/distnoted daemon
    root               56   0.0  0.4  2503208  17756   ??  Ss    2:31PM   0:03.60 /System/Library/CoreServices/coreservicesd
    root               53   0.0  0.1  2483920   4964   ??  Ss    2:31PM   0:00.05 /usr/sbin/aosnotifyd
    root               52   0.0  0.2  2486036   7204   ??  Ss    2:31PM   0:00.72 /System/Library/PrivateFrameworks/ApplePushService.framework/applepushserviced
    root               50   0.0  0.0  2468340   1864   ??  Ss    2:31PM   0:00.03 autofsd
    root               44   0.0  0.0  2434816    756   ??  Ss    2:31PM   0:00.05 /sbin/dynamic_pager -F /private/var/vm/swapfile
    root               42   0.0  0.0  2469332   1928   ??  Ss    2:31PM   0:11.46 /usr/libexec/hidd
    root               40   0.0  0.0  2448964   1040   ??  Ss    2:31PM   0:00.02 /usr/sbin/KernelEventAgent
    root               35   0.0  1.7  2772924  69804   ??  Ss    2:31PM   0:09.88 /System/Library/Frameworks/CoreServices.framework/Frameworks/Metadata.framework/Support/mds
    root               33   0.0  0.2  2493672   9716   ??  Rs    2:31PM   0:02.86 /usr/libexec/opendirectoryd
    root               30   0.0  0.1  2484508   2136   ??  Ss    2:31PM   0:01.22 /System/Library/CoreServices/powerd.bundle/powerd
    root               29   0.0  0.1  2473988   3096   ??  Ss    2:31PM   0:00.29 /System/Library/PrivateFrameworks/GenerationalStorage.framework/Versions/A/Support/revisiond
    root               26   0.0  0.2  2488388  10180   ??  Ss    2:31PM   0:00.50 /usr/sbin/securityd -i
    root               25   0.0  0.0  2465780   1272   ??  Ss    2:31PM   0:00.03 /usr/libexec/stackshot -t
    root               23   0.0  0.0  2467312   1124   ??  Ss    2:31PM   0:00.02 /sbin/SystemStarter
    root               18   0.0  0.0  2436488   1432   ??  Ss    2:31PM   0:00.15 /usr/sbin/ntpd -c /private/etc/ntp-restrict.conf -n -g -p /var/run/ntpd.pid -f /var/db/ntp.drift
    root               16   0.0  0.0  2475640    900   ??  Ss    2:31PM   0:00.27 /usr/sbin/syslogd
    root               15   0.0  0.1  2498860   5344   ??  Ss    2:31PM   0:02.37 /usr/libexec/configd
    root               14   0.0  0.0  2467952   1704   ??  Ss    2:31PM   0:00.11 /usr/sbin/diskarbitrationd
    root               13   0.0  0.1  2479524   5552   ??  Ss    2:31PM   0:07.01 /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/CarbonCore.framework/Versions/A/Support/fseventsd
    root               12   0.0  0.0  2463468   1220   ??  Ss    2:31PM   0:00.54 /usr/sbin/notifyd
    root               11   0.0  0.2  2500120   8136   ??  Ss    2:31PM   0:00.35 /usr/libexec/UserEventAgent -l System
    root               10   0.0  0.1  2469280   4796   ??  Ss    2:31PM   0:01.95 /usr/libexec/kextd
    root                1   0.0  0.0  2475372   1772   ??  Ss    2:31PM   0:01.27 /sbin/launchd
    root              941   0.0  0.0  2435084    600 s000  R+    3:02PM   0:00.00 ps aux
    root              935   0.0  0.1  2468616   2268 s000  Ss    3:02PM   0:00.05 login -pfl andrewkowalczyk /bin/bash -c exec -la bash /bin/bash
    root              777   0.0  0.1  2489432   5360   ??  Ss    2:55PM   0:00.05 /System/Library/Frameworks/CoreMediaIO.framework/Resources/VDC.plugin/Contents/Resources/VDCAssistant


2. What processes are running on your account?

Here is command I issued for this question.

    frodosamoa:Desktop andrewkowalczyk$ ps aux | grep -v "root" && andrew

Here is the text dump from the command.

    USER              PID  %CPU %MEM      VSZ    RSS   TT  STAT STARTED      TIME COMMAND
    andrewkowalczyk   234  12.3  1.9  2585240  78780   ??  S    Tue02PM  19:39.21 /System/Library/Image Capture/Support/Image Capture Extension.app/Contents/MacOS/Image Capture Extension -psn_0_118813
    andrewkowalczyk   130   4.5  1.5  3738564  61388   ??  U    Tue02PM   4:14.34 /System/Library/CoreServices/Finder.app/Contents/MacOS/Finder
    _mdnsresponder     36   3.5  0.2  2479024   6476   ??  Ss   Tue02PM   3:56.46 /usr/sbin/mDNSResponder -launchd
    _windowserver      90   0.6  1.9  3265784  80696   ??  Ss   Tue02PM   4:35.43 /System/Library/Frameworks/ApplicationServices.framework/Frameworks/CoreGraphics.framework/Resources/WindowServer -daemon
    andrewkowalczyk   178   0.4  1.0   811688  40924   ??  S    Tue02PM   0:22.82 /Applications/Dropbox.app/Contents/MacOS/Dropbox -psn_0_73746
    andrewkowalczyk   933   0.2  0.7  2553260  30184   ??  R    Tue03PM   0:35.66 /Applications/Utilities/Terminal.app/Contents/MacOS/Terminal -psn_0_565386
    andrewkowalczyk   175   0.1  0.3  3575348  11632   ??  S    Tue02PM   0:23.22 /Applications/Flux.app/Contents/MacOS/Flux -psn_0_61455
    _usbmuxd           21   0.1  0.1  2478832   2592   ??  Ss   Tue02PM   0:08.91 /System/Library/PrivateFrameworks/MobileDevice.framework/Versions/A/Resources/usbmuxd -launchd
    _spotlight       4819   0.0  0.0  2466492    848   ??  Ss    4:32PM   0:00.01 /sbin/launchd
    andrewkowalczyk  2608   0.0  3.3  3016488 138896   ??  S    12:51AM   1:55.68 /Applications/Logisim.app/Contents/MacOS/JavaApplicationStub -psn_0_1274167
    andrewkowalczyk  1650   0.0  1.5  2616828  64384   ??  S    Tue03PM   0:28.77 /Applications/Sublime Text 2.app/Contents/MacOS/Sublime Text 2 -psn_0_831691
    andrewkowalczyk   957   0.0  0.1  2488792   3504   ??  S    Tue03PM   0:00.12 /usr/libexec/lsboxd
    andrewkowalczyk   938   0.0  0.0  2435492   1172 s000  S    Tue03PM   0:00.04 -bash
    andrewkowalczyk   239   0.0  0.0   596648    176   ??  S    Tue02PM   0:02.24 /Library/DropboxHelperTools/Dropbox_u501/dbfseventsd
    andrewkowalczyk   235   0.0  0.2  2516584   7616   ??  S    Tue02PM   0:02.64 /Library/Image Capture/Support/LegacyDeviceDiscoveryHelpers/CIJScannerRegister.app/Contents/MacOS/CIJScannerRegister -psn_0_122910
    andrewkowalczyk   209   0.0  0.2   723380   9676   ??  S    Tue02PM   0:02.15 /Library/Application Support/Adobe/OOBE/PDApp/UWA/AAM Updates Notifier.app/Contents/MacOS/AAM Updates Notifier -psn_0_110619
    andrewkowalczyk   201   0.0  0.3  2498364  10728   ??  S    Tue02PM   0:00.66 /System/Library/Services/AppleSpell.service/Contents/MacOS/AppleSpell -psn_0_106522
    _locationd        185   0.0  0.1  2473872   3528   ??  Ss   Tue02PM   0:00.20 /usr/libexec/locationd
    andrewkowalczyk   177   0.0  0.5  2554824  20704   ??  S    Tue02PM   0:01.32 /Applications/Alfred.app/Contents/MacOS/Alfred -psn_0_69649
    andrewkowalczyk   176   0.0  0.3  2530412  12560   ??  R    Tue02PM   0:42.15 /Applications/smcFanControl.app/Contents/MacOS/smcFanControl -psn_0_65552
    andrewkowalczyk   174   0.0  0.3  2531552  12596   ??  S    Tue02PM   0:00.56 /Applications/gfxCardStatus.app/Contents/MacOS/gfxCardStatus -psn_0_57358
    andrewkowalczyk   154   0.0  0.1  2468180   2328   ??  S    Tue02PM   0:00.61 /System/Library/CoreServices/AirPort Base Station Agent.app/Contents/MacOS/AirPort Base Station Agent -launchd -allowquit
    andrewkowalczyk   149   0.0  0.3  2493372  12476   ??  S    Tue02PM   0:00.56 /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/Contents/MacOS/imagent
    andrewkowalczyk   145   0.0  0.0  2469052   1868   ??  SN   Tue02PM   0:00.01 /usr/libexec/warmd_agent
    andrewkowalczyk   144   0.0  0.4  2516104  18652   ??  S    Tue02PM   0:00.64 /Applications/iPhoto.app/Contents/Library/LoginItems/PhotoStreamAgent.app/Contents/MacOS/PhotoStreamAgent
    andrewkowalczyk   139   0.0  0.3  2516304  11416   ??  Ss   Tue02PM   0:00.25 com.apple.dock.extra
    andrewkowalczyk   135   0.0  0.1  2519528   5936   ??  S    Tue02PM   0:04.96 /System/Library/Frameworks/ApplicationServices.framework/Frameworks/ATS.framework/Support/fontd
    _coreaudiod       131   0.0  0.1  2490220   4744   ??  Ss   Tue02PM   0:26.17 /usr/sbin/coreaudiod
    andrewkowalczyk   129   0.0  0.0  2437240    956   ??  S    Tue02PM   0:00.01 /usr/sbin/pboard
    andrewkowalczyk   128   0.0  0.7  2632464  28928   ??  S    Tue02PM   0:25.81 /System/Library/CoreServices/SystemUIServer.app/Contents/MacOS/SystemUIServer
    andrewkowalczyk   127   0.0  0.2  2507308   7452   ??  S    Tue02PM   0:00.50 /System/Library/CoreServices/talagent
    andrewkowalczyk   126   0.0  0.4  2537516  17700   ??  S    Tue02PM   0:03.84 /System/Library/CoreServices/Dock.app/Contents/MacOS/Dock
    andrewkowalczyk   121   0.0  0.1  2472672   5848   ??  S    Tue02PM   0:01.91 /usr/sbin/distnoted agent
    andrewkowalczyk   119   0.0  0.3  2501196  10564   ??  S    Tue02PM   0:00.97 /usr/libexec/UserEventAgent -l Aqua
    andrewkowalczyk   113   0.0  0.0  2474788   1648   ??  Ss   Tue02PM   0:03.37 /sbin/launchd
    _netbios           96   0.0  0.1  2480444   2444   ??  SNs  Tue02PM   0:02.40 /usr/sbin/netbiosd
    andrewkowalczyk    38   0.0  0.6  2569292  24504   ??  Ss   Tue02PM   0:02.81 /System/Library/CoreServices/loginwindow.app/Contents/MacOS/loginwindow console
    nobody             20   0.0  0.1  2469256   3432   ??  SNs  Tue02PM   0:00.37 /usr/libexec/warmd
    andrewkowalczyk  4846   0.0  0.1  2470008   2236   ??  S     4:57PM   0:00.02 /System/Library/Frameworks/ApplicationServices.framework/Versions/A/Frameworks/ATS.framework/Versions/A/Support/fontworker
    andrewkowalczyk  4836   0.0  0.2  2495488   9892   ??  SN    4:56PM   0:00.12 /System/Library/Frameworks/CoreServices.framework/Frameworks/Metadata.framework/Versions/A/Support/mdworker -s mdworker -c MDSImporterWorker -m com.apple.mdworker.pool.0
    andrewkowalczyk  4835   0.0  0.1  2440136   2812   ??  S     4:56PM   0:00.04 /System/Library/Frameworks/OpenGL.framework/Versions/A/Libraries/CVMCompiler 1
    _spotlight       4834   0.0  0.1  2470140   4560   ??  Ss    4:56PM   0:00.03 /usr/libexec/xpchelper
    _spotlight       4833   0.0  0.0  2467504   1204   ??  S     4:56PM   0:00.01 /usr/sbin/distnoted agent
    _spotlight       4832   0.0  0.1  2490196   6032   ??  SN    4:56PM   0:00.14 /System/Library/Frameworks/CoreServices.framework/Frameworks/Metadata.framework/Versions/A/Support/mdworker -s mdworker -c MDSImporterWorker -m com.apple.mdworker.pool.0
    -bash: andrew: command not found



3. Run a typical working set of applications (e.g., web browser, chat program, text editor, etc.). Which application is using the most real memory? The most virtual memory?


4. Login to my.cs.lmu.edu. Who else, other than root and you, has processes running at that time?


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

