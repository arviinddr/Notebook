Practice: Basic Commands
1. Explain the difference between these two commands.
find /data -name "*.txt"
find /data -name *.txt

sol:When *.txt is quoted then the shell will not touch it. The find tool will look in the /data for all files ending in .txt.

When *.txt is not quoted then the shell might expand this (when one or more files that ends in .txt exist in the current directory). The find might show a different result, or can result in a syntax error.

2. Explain the difference between these two statements. Will they both work when there are 200 .odf files in /data ? How about when there are 2 million .odf files ?

find /data -name "*.odf" > data_odf.txt
find /data/*.odf > data_odf.txt

sol: The first find will output all .odf filenames in /data and all subdirectories. The shell will redirect this to a file.

The second find will output all files named .odf in /data and will also output all files that exist in directories named *.odf (in /data).

3. Write a find command that finds all files created after January 30th 2010.

sol:touch -t 201001302359 marker_date
find . -type f -newer marker_date 

4. Write a find command that finds all *.odf files created in September 2009.
sol:
touch -t 200908312359 marker_start
touch -t 200910010000 marker_end
find . -type f -name "*.odf" -newer marker_start ! -newer marker_end

5. Count the number of *.conf files in /etc and all its subdirs.
sol:

find /etc -type f -name '*.conf' | wc -l

6. Here are two commands that do the same thing: copy *.odf files to /backup/ . What would be a reason to replace the first command with the second ?
cp -r /data/*.odf /backup/
find /data -name "*.odf" -exec cp {} /backup/ \;
sol:
The first might fail when there are too many files to fit on one command line.
7. Create a file called loctest.txt. Can you find this file with locate ? Why not ? How do you make locate find this file ?

sol:
updatedb
8. Use find and -exec to rename all .htm files to .html.
sol:
find . -name '*.htm' -exec mv {} {}l \;
find . -name '*.htm*'

9. Issue the date command. Now display the date in YYYY/MM/DD format.

sol- date +"%Y-%m-%d"

10. Issue the cal command. Display a calendar of 1582 and 1752. Notice anything special ?

sol:The calendars are different depending on the country. 




