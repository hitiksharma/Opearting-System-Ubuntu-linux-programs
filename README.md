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
