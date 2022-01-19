#include <stdio.h>
#include <unistd.h>
int main()
{
printf("Transfer to execlp function \n");
execlp("head", "head","-2","f1",NULL); 
printf("This line will not execute \n");
return 0;
}


Why second printf statement is not executing?
= First executable function is the first printf statement.
When OS executes execlp function the control transfers to the execlp function due to which the control will never return back to the calling place, hence on successful execution of execlp function, it will never return back. So, this program will not execute the second printf statement.
