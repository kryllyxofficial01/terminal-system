# terminal-system
A basic terminal with custom shell commands and its own filesystem.

### Commands
**<>** means required, **[]** means optional

`help [command]`
<br>
Returns either a list of all possible commands and a brief description of each of them, or an in-depth explanation of a specific command.

`mk -f <filename>` or `mk -d <directory name>`
<br>
Creates either a file or a directory in the current directory.

`ls [path]`
<br>
Lists all the items in the current directory.

`cd <directory>`
<br>
Change the current directory to the specified one.

`mv <filename/directory name> <path>`
<br>
Move either a file or a directory to the specified path.

`cp <filename/directory name> <path>`
<br>
Copy either a file or a directory to the specified path.

`rm <path>`
<br>
Deletes an item. Can be either a file or a directory.

`pwd`
<br>
Prints the path to the current directory.

`find [path] <regex>`
<br>
Find all files in a directory (default is current) that match the regular expression.

`print <text>`
<br>
Output the provided text.

`text <filename>`
<br>
Opens a file in the text editor.

`clear`
<br>
Clears the terminal.

`exit`
<br>
Exits the terminal session.