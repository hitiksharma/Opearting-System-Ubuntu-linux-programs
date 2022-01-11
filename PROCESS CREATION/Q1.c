#include<stdio.h>
#include <unistd.h>

int main()

{

int z;

printf("Enter value of n: ");

scanf("%d",&z);

int sumodd = 0, sumEven = 0, n,i;

n = fork();

if (n > 0){

for (i = 1; i <= z; i++) {
if(i%2==0)
sumEven = sumEven + i;

} 
printf("Parent process \n"); 
printf("Sum of even no. is= %d\n", sumEven);

}

else {

for (i = 1; i <= z; i++) { 
if (i%2 != 0) 
sumodd = sumodd + i;

} 
printf("Child process \n"); 
printf("Sum of odd no. is= %d\n", sumodd);

} 
return 0;
}
