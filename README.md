# Opearting-System-Ubuntu-linux-programs

Experiment:- PROCESS CREATION

Q1. Implement the C program in which the child process calculates the sum of
odd numbers and the parent process calculate the sum of even numbers up
to the number ‘n’.
Objective:
To write a C program in which the child process calculates the sum of odd
numbers and the parent process calculate the sum of even numbers up to the
number ‘n’.
Procedure:
Step 1: Input the value of n.
Step 2: Invoke the fork() system call.
Step 3: Check for the return value of fork() system call. If the value returned is
zero then it is child process. Calculate the sum of odd numbers. Display the
sum of odd numbers.
Step 4: If the fork() system call returns a non-zero positive integer, then it is
parent process. Calculate the sum of even numbers. Display the sum of even
numbers.
Step 5: stop.

Expected Output:
Enter the value of n : 8
Evensum=20
oddsum=16
Outcome:
Learned and practiced how to use fork() to create child process.


Q2.Implement the C program in which main program accepts the integers to
be sorted Main program uses the fork system call to create a new process
called a child process. Parent process sorts the integers using insertion sort
and waits for child process using wait system call to sort the integers using
selection sort.
Objective:
To write a C program in which parent process sorts the given integers using
insertion sort and the child process sorts the integers using selection sort. The
parent process has to wait until the child process terminates.
Procedure:
Step 1: Input the Integers to be sorted
Step 2: Display the Entered Integers
Step 3: Create Child Process
Step 4: Call selection sort method inside child process
Step 5: Display the sorted Integers using selection sort.
Step 6: Call insertion sort method inside Parent process
Step 7: Display the sorted Integers using insertion sort sort.
Step 8: stop.
Expected Output:
~$ vi program.c
~$ gcc program.c
~$ ./a.out

Enter the number of Integers to Sort:::: 5
Enter number 1:67
Enter number 2:4
Enter number 3:12
Enter number 4:8
Enter number 5:33
Your Entered Integers for Sorting
67 4 12 8 33
Current Process ID is : 3183
[ Forking Child Process ... ]
parent process 3183 started
Parent of parent is 3178
The Child Process
child process is 3184
parent of child process is 3183Child is sorting the list of Integers by selection
sort::
The sorted List by Child::
4 8 12 33 67
Child Process Completed ...
parent of child process is 3183The Parent Process
Parent 3183 is sorting the list of Integers by insertion sort
The sorted List by Parent::
4 8 12 33 67
Parent Process Completed ...
Outcome:
Learned and practiced how to use fork() system call to create a child process and
make parent process to wait for child process.


Q3. Implement the C program in which main program accepts an integer array.
Main program uses the fork system call to create a new process called a
child process. Parent process sorts an integer array and passes the sorted
array to child process through the command line arguments of execve
system call. The child process uses execve system call to load new program
that uses this sorted array for performing the binary search to search the
particular item in the array.
Objective:
To write a C program in which parent process sorts the given integers and passes
the sorted integers to the child process through the command line arguments of
execve system call. The child process uses execve system call to load new
program that uses this sorted array for performing the binary search.
Procedure:
Step 1: Input the Integers to be sorted
Step 2: Display the Entered Integers
Step 3: Sort the integers.
Step 4: Display the sorted Integers .
Step 5: Input the integer to be searched.
Step 6: Create Child Process
Step 7: Pass the sorted integers to the child process through the command line
arguments of execve system call.
Step 8: Perform binary search.
Step 7: Display the result of search.
Step 8:Stop.
Expected Output:
~$ vi parent.c
~$ vi child.c
~$ gcc parent.c
~$ gcc -o sample child.c
~$ ./a.out sample
Enter the size for an array
Enter 5 elements: 5
4
3
2
1
Entered elements are: 5 4 3 2 1
Sorted elements are: 1 2 3 4 5
Enter elements to search:
3
Element found in the given array...!!!


Q4. Write a program to print the Child process ID and Parent process ID in
both Child and Parent processes.

Objective:
To write a C program to print the Child process ID and Parent process ID in
both Child and Parent processes.
Procedure:
Step 1: Print a hello message in Parent process.
Step 2: Invoke the fork() system call.
Step 3: Check for the return value of fork() system call. If the value returned is
zero then it is child process. Print the Child process ID and Parent process ID
using getpid() and getppid() methods.
Step 4: If the fork() system call returns a non-zero positive integer, then it is
parent process. Print the Child process ID and Parent process ID using getpid()
and getppid() methods.
Step 5: stop.

Expected Output:
hello before fork
i : 0
parent has started
getpid : 721 getppid : 716
Hi after fork i : 722
Child has started
child printing first time
getpid : 722 getppid : 1

Outcome:
Learned and practiced how to use getpid() to get the process id and getppid() to
get the parent process id.


Experiment: OVERLAY CONCEPT

Q1.Execute the Following Program and write the output
$vi ex1.c
#include <stdio.h>
#include <unistd.h>
int main()
{
printf("Transfer to execlp function \n");
execlp("head", "head","-2","f1",NULL); 
printf("This line will not execute \n");
return 0;
}
Output :

Why second printf statement is not executing?



Q2.. Rewrite question 1 with execlp() function. Pass the 3rd and 4th argument of the function
execlp() through command line arguments.
$vi ex2.c

Experiment: PIPE INTER PROCESS COMMUNICATION 

Ques1.Uni directional pipe:
Algorithm
Step 1 − Create a pipe using pipe() system call.
Step 2 − Send a message to the one end of the pipe.
Step 3 − Retrieve the message from the other end of the pipe and write it to the standard output.

Expected Output:
hello, world #1
hello, world #2
hello, world #3





