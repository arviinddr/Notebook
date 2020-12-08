Practice6: control operators( ;, &, $?, &&, ||, #, \ )
0. Each question can be answered by one command line!
1. When you type passwd, which file is executed ?
sol: which passwd----->/usr/bin/passwd
     
2. What kind of file is that ?
sol:
     file /usr/bin/passwd----->/usr/bin/passwd: setuid ELF 64-bit LSB shared object
     
3. Execute the pwd command twice. (remember 0.)
sol: 
     pwd ; pwd
     
4. Execute ls after cd /etc, but only if cd /etc did not error.
sol: 
    cd /etc && ls
5. Execute cd /etc after cd etc, but only if cd etc fails.
sol:cd etc || cd /etc

6. Echo it worked when 'touch test42' works, and echo it failed when the touch failed. All on one command line as a normal user (not root). Test this line in your home directory and in /bin/ .
sol: user@BLTSP01938:~$ touch test42 && echo it worked || echo it failed it worked
     user@BLTSP01938:~$ cd /bin; touch test42 && echo it worked || echo it failed 
     touch: cannot touch 'test42': Permission denied it failed

7. Execute sleep 6, what is this command doing ?
sol:  pausing for six seconds

8. Execute sleep 200 in background (do not wait for it to finish).
sol:   sleep 200 &

9. Write a command line that executes rm file55. Your command line should print 'success'
if file55 is removed, and print 'failed' if there was a problem.
sol:    rm file55 && echo success || echo failed


10. Use echo to display "Hello World with strange' characters \ * [ } ~ \\ ." (including all quotes)/home/user
/home/user

sol:    echo \"Hello World with strange\' characters \\ \* \[ \} \~ \\\\ \. \"
