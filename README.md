# Simple Shell

## List of files

| Files | Description |
| ------ | ------ |
| 1.0_getppid.c | Prints the PID of the parent process. |
| 1.1_pid_max.sh | Prints the maximum value a process ID can be |
| 2.0_arg_av.c | Prints all the arguments, without using ac.|
| 2.1_read_line.c | (getline) Write a program that prints "$ ", wait for the user to enter a command, prints it on the next line. |
| 2.2_cmd_line_to_av.c |  (strtok) Write a function that splits a string and returns an array of each word of the string. |
| 3_execve.c | The system call execve allows a process to execute another program. |
| 4_fork.c | The system call fork (man 2 fork) creates a new child proces... |
| 4.1_fork.c | Using the return value of fork, it is possible to know if the current process is the father or the child: fork will return 0 to the child, and the PID of the child to the father. |
| 5_wait.c | Suspends execution of the calling process until one of its children terminates. |
| 6.fork+wait+execve.c | Write a program that executes the command ls -l /tmp in 5 different child processes. |
| generate-authors.sh and AUTHORS | Authors |
| File man_1_simple_shell | Manual for our simple shell |

