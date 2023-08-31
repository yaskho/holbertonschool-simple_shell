INTROCUDTION:
A simple shell, often referred to as a command-line interpreter or CLI (Command Line Interface), is a basic command-line interface that allows users to interact with an operating system by typing text-based commands. It provides a way to communicate with the computer system using textual commands rather than graphical interfaces. The simple shell takes in user input, interprets the commands, executes them, and provides textual output as a response.

CODE OVERVIEW:
The code for the simple shell project is divided into multiple files, each with a specific purpose. Here is an overview of each file and its purpose:

1.shell.h:

This file contains the function prototypes and header files required for the project.

2.main.c:

This file contains the main loop of the shell, where user input is accepted, parsed, and executed.

3.parsing.c:

This file contains a function that splits a string into an array of strings based on a specified delimiter.

4.checking-path.c:

This file contains a function that finds the full path of a given command.

5.execution.c:

This file contains a function that executes a command.

6.free.c:

This file contains a function that frees an array of strings.

FUNCTIONALITY:
The simple shell project implements the following functionality:

1.Accept user input from the command line.

2.Parse the input into a command and arguments.

3.Execute the command with the specified arguments.

4.Handle the exit command.

5.Print the environment variables.

compilation and testing:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
execute:
./hsh

how we use shell:
shell display each time a command that we executed the comand that most user excute in shell:

- ls	to list files and directory
- cd	change directory
- pwd	print working directory
- cat	show you what we wrote in our file
- env	print the environment variable
- printenv	print the shell variable
- exit	shell will end and it gonna exit


AUTHORS:
YASSINE KHOUZAMI