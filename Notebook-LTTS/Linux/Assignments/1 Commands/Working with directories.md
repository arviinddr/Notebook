Practise1: Working with directories

1. Display your current directory.
   Solution: training@training-OptiPlex-5040:~$ pwd
   output:   /home/training
  
  
2. Change to the /etc directory.
   Solution: training@training-OptiPlex-5040:~$ cd /etc
   output:   training@training-OptiPlex-5040:/etc$
   
   
3. Now change to your home directory using only three key presses.
   Solution: training@training-OptiPlex-5040:/etc$ cd
   output:   training@training-OptiPlex-5040:~$
   
   
4. Change to the /boot/grub directory using only eleven key presses.
   Solution: training@training-OptiPlex-5040:/etc$ cd /boot/grub 
   		By making use of tab to complete the path like 
   			Step 1. cd /bo(tab)==> cd/boot/
   			Step 2. cd /boot/g(tab) ==> cd /boot/grub
   			Total 11 Key Presses.
   output:   training@training-OptiPlex-5040:/boot/grub $
   
   
5. Go to the parent directory of the current directory.
   Solution: training@training-OptiPlex-5040:/boot/grub$ cd ..
   output:   training@training-OptiPlex-5040:/boot$
      
   
6. Go to the root directory.
   Solution: training@training-OptiPlex-5040:/boot/grub$ cd /
   output:   training@training-OptiPlex-5040:/$
   
   
7. List the contents of the root directory.
   Solution: training@training-OptiPlex-5040:/$ ls
   output:   bin   cdrom  etc   lib    lib64   lost+found  mnt  proc  run   snap  sys  usr
             boot  dev    home  lib32  libx32  media       opt  root  sbin  srv   tmp  var


8. List a long listing of the root directory.
   Solution:training@training-OptiPlex-5040:/$ ls -l
   output: total 76
	   lrwxrwxrwx   1 root root     7 Sep 19 09:13 bin -> usr/bin
	   drwxr-xr-x   3 root root  4096 Sep 23 08:29 boot
	   drwxrwxr-x   2 root root  4096 Sep 19 09:15 cdrom
	   drwxr-xr-x  20 root root  4540 Sep 30 08:17 dev
	   drwxr-xr-x 143 root root 12288 Sep 29 08:59 etc
	   drwxr-xr-x   4 root root  4096 Sep 19 09:15 home
	   lrwxrwxrwx   1 root root     7 Sep 19 09:13 lib -> usr/lib
	   lrwxrwxrwx   1 root root     9 Sep 19 09:13 lib32 -> usr/lib32
	   lrwxrwxrwx   1 root root     9 Sep 19 09:13 lib64 -> usr/lib64
	   lrwxrwxrwx   1 root root    10 Sep 19 09:13 libx32 -> usr/libx32
	   

9. Stay where you are, and list the contents of /etc.
   Solution: training@training-OptiPlex-5040:/$ ls /etc
   output: lists all the files present in /etc directory
   
   
10. Stay where you are, and list the contents of /bin and /sbin.
    Solution: training@training-OptiPlex-5040:/$ ls /bin /sbin
    output: /bin:    list all files under /bin
            /sbin:   list all files under /bin
            
            
11. Stay where you are, and list the contents of ~.
    Solution: training@training-OptiPlex-5040:/$ ls ~
    output: Desktop    Downloads   Music     Public  Templates
            Documents  googletest  Pictures  snap    Videos
            

12. List all the files (including hidden files) in your home directory.
    Solution: training@training-OptiPlex-5040:/$ ls -al ~
    output: lists all the files including the hidden files in the home directory
            total 132
	    drwxr-xr-x 20 training training  4096 Sep 30 08:18 .
	    drwxr-xr-x  4 root     root      4096 Sep 19 09:15 ..
	    -rw-------  1 training training 15531 Sep 29 19:03 .bash_history
	    -rw-r--r--  1 training training   220 Sep 19 09:15 .bash_logout
	    -rw-r--r--  1 training training  3771 Sep 19 09:15 .bashrc
	    drwxr-xr-x 18 training training  4096 Sep 30 08:18 .cache


13. List the files in /boot in a human readable format.
    Solution: training@training-OptiPlex-5040:/$ ls -lh /boot
    output:   total 186M
	      -rw-r--r-- 1 root root 233K Sep  5 00:38 config-5.4.0-47-generic
	      -rw-r--r-- 1 root root 233K Sep 10 15:42 config-5.4.0-48-generic
	      drwxr-xr-x 4 root root 4.0K Sep 23 08:28 grub
	      lrwxrwxrwx 1 root root   27 Sep 22 15:41 initrd.img -> initrd.img-5.4.0-48-generic
	      -rw-r--r-- 1 root root  77M Sep 22 09:54 initrd.img-5.4.0-47-generic
	      -rw-r--r-- 1 root root  77M Sep 23 08:29 initrd.img-5.4.0-48-generic


14. Create a directory testdir in your home directory.
    Solution:training@training-OptiPlex-5040:/$ mkdir ~/testdir
    		(testdir directory is created successfully in the home(~) directory)
    
    
15. Change to the /etc directory, stay here and create a directory newdir in your home directory.
    Solution: training@training-OptiPlex-5040:/$ cd /etc ; mkdir ~/newdir
    output:   training@training-OptiPlex-5040:/etc $   (chnaged path to /etc and also simultaneously directory has been created successfully in the ~ (home))
    
    
16. Create in one command the directories ~/dir1/dir2/dir3 (dir3 is a subdirectory from dir2,and dir2 is a subdirectory from dir1 ).
    Solution: training@training-OptiPlex-5040:/etc$ mkdir -p ~/dir1/dir2/dir3
    
    
17. Remove the directory testdir.
    Solution: training@training-OptiPlex-5040:/etc$  rmdir ~/testdir
    
    
   
18. Open manual page for bash and read about pushd and popd by searching in manpage.
    Solution: man bash
	      /pushd (type /pushd to search)
	      n  (multiple times to go for next find result)
	      /popd
	      n
