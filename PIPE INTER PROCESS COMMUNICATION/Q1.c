#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#define size 16
char*msg1 = "hello world 1";
char*msg2 = "hello world 2";
char*msg3 = "hello world 3";

int main(){

char inbuf[size];
int p[2],i;

if(pipe(p)<0){
   exit(1);
}

write(p[1],msg1,size);
write(p[1],msg2,size);
write(p[1],msg3,size);

for(i=0;i<3;i++){
  read(p[0] , inbuf , size);
  printf("%s\n",inbuf);
}
return 0;
}
