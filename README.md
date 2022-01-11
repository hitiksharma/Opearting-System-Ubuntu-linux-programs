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

18CSC205J-Operating Systems Lab

SRM IST, Kattankulathur - 4 -
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

