practice: Redirection
1. Store error from a command to file.

command-name 2> errors.txt
command-name 2> stderr.txt


2. Store output from a command to file.

command-name > output.txt
command-name > stdout.txt

3. Create a log file and append the errors to that file.

command-name 2>> output.txt

4. Feed inline input to a command
(a)					(b)
var=10			----|---	cat <myfirstscript>
echo $var		----|---

5. Feed output of one command as input to another.

 command1 | command2
 
6. Run a command that gives one output and one error.

command >output.txt 2>filename.txt

7. Store output to a file and redirect error to display in the above command.

command-name > output.txt
command-name 2> command2


