#include <stdio.h>
#include <sys/types.h> 
#include <unistd.h>

int i=3 ;
int x;
int main (void){
 int j=7;
 int p ;
 while(i && (p=fork())){
 if(p<0) exit(1) ;
 else {i=i-1;
    x=i;
   }
 }
 j = j+(2*i);
 if (p == 0)
 { i = i*3;
 j = j*3;
 }
 else
 { i = i*2;
 j = j*2;
 }
 printf("my number is %d i=%d, j=%d\n ",getpid(),i,j);
  return 0;
  }
