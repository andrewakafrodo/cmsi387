Terminal Output
===============

I included two lines of terminal prompt in between each command to make it easier on the eye. I also used `gedit` to create and save the text files within the directory and subdirectory which is why they are not included.

	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ dd if=/dev/zero of=image count=1024
	1024+0 records in
	1024+0 records out
	524288 bytes (524 kB) copied, 0.00245996 s, 213 MB/s 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ mke2fs image
	mke2fs 1.42.5 (29-Jul-2012)
	image is not a block special device.
	Proceed anyway? (y,n) y
	Discarding device blocks: done                            
	Filesystem label=
	OS type: Linux
	Block size=1024 (log=0)
	Fragment size=1024 (log=0)
	Stride=0 blocks, Stripe width=0 blocks
	64 inodes, 512 blocks
	25 blocks (4.88%) reserved for the super user
	First data block=1
	Maximum filesystem blocks=524288
	1 block group
	8192 blocks per group, 8192 fragments per group
	64 inodes per group

	Allocating group tables: done                            
	Writing inode tables: done                            
	Writing superblocks and filesystem accounting information: done
	 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ mkdir imagetest 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ sudo mount -o loop -o nosuid -o nodev image imagetest
	[sudo] password for frodo: 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ df imagetest
	Filesystem     1K-blocks  Used Available Use% Mounted on
	/dev/loop0           499    15       459   4% /home/frodo/Desktop/cmsi387/homework/csi-fs/imagetest
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs$ cd imagetest
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$ mkdir directory
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$ cd directory
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$ ln -s ../text.txt .
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$ 
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest/directory$ cd ..
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$
	frodo@samtrefoil:~/Desktop/cmsi387/homework/csi-fs/imagetest$ ln directory/text2.txt .