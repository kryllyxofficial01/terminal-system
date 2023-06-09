# terminal-system
A basic terminal with custom shell commands and its own filesystem.

### Commands
**<>** means required, **[]** means optional

`help [command]`
<br>
Returns either a list of all possible commands and a brief description of each of them, or an in-depth explanation of a specific command.

2. `mk -f <filename>` or `mk -d <directory name>`
<br>
Creates either a file or a directory in the current directory.

3. `ls [path]`
<br>
Lists all the items in the current directory.

4. `cd <directory>`
<br>
Change the current directory to the specified one.

5. `mv <filename/directory name> <path>`
<br>
Move either a file or a directory to the specified path.

6. `cp <filename/directory name> <path>`
<br>
Copy either a file or a directory to the specified path.

7. `rm <path>`
<br>
Deletes an item. Can be either a file or a directory.

8. `pwd`
<br>
Prints the path to the current directory.

9. `find [path] <regex>`
<br>
Find all files in a directory (default is current) that match the regular expression.

10. `print <text>`
<br>
Output the provided text.

11. `text <filename>`
<br>
Opens a file in the text editor.

12. `clear`
<br>
Clears the terminal.

13. `exit`
<br>
Exits the terminal session.