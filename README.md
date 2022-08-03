# Project: Simple Shell

- simple_shell is a basic command interpreter that executes commands from the standard input or from a file.

## Description

- This is a simple version of the UNIX shell command interpreter. 

## Project Requirements:

- Allowed editors: `vi`, `vim`, `emacs`
- All our files were compiled on `Ubuntu 20.04 LTS (Ubuntu 9.4.0-1ubuntu1~20.04.1) gcc 9.4.0` using the flags `-Wall` `-Werror` `-Wextra` `-pedantic` `and -std=gnu89`.
-  All our files end with a new line.
-  This `README.md` file, at the root of the folder of the project was mandatory.
-  The project code conforms to the `Hoberton School, Betty` style format. All the code was checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl "betty-style.pl") and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl "betty-doc.pl")
-  Your shell should not have any memory leaks.
-  No more than 5 functions per file.
-  All your header files should be include guarded.

## Installation
Clone the repository
```bash
git clone https://github.com/raycast5/holbertonschool-simple_shell
```
### Compilation
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```
### Run the shell
```bash
./hsh
```
### Files
| File Name | Description |
| ------ | ------ |

## Example Interactive mode

## Example Non Interactive mode

## Shell version history

### Simple shell 0.1

The shell functions:
- Displays a prompt and waits for the user to type a command. A command line always ends with a new line.
- The prompt is displayed again each time a command has been executed.
- The command lines are simple, no semicolons, no pipes, no redirections or any other advanced features.
- The command lines are made only of one word. No arguments will be passed to programs.
- If an executable cannot be found, print an error message and display the prompt again.
- Handles errors.
- Handles the “end of file” condition (Ctrl+D)

The shell does not have to:
- use the `PATH`
- implement built-ins
- handle special characters : ", ', `, \, *, &, #
- be able to move the cursor
- handle commands with arguments

### Simple shell 0.2

- Handles command lines with arguments

### Simple shell 0.3

- Handles the `PATH`
- `fork` must not be called if the command doesn't exist

### Simple shell 0.4

- The exit built-in is implemented, that exits the shell
- Usage: `exit`
- Does not have to handle any arguments to the built-in `exit`

### Simple shell 1.0

- The `env` built-in is implemented, that prints the current environment

### Authors

Jaime Diaz | [GitHub](https://github.com/jaimeBalseiro)

Raymond Colon | [GitHub](https://github.com/raycast5)
