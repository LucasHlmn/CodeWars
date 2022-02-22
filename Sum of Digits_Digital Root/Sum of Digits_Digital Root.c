#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

int digital_root(int n) {
  printf("%d\n",n);
int sum;
//split the number
  while (n>9){ //992,20
    sum =0;
    while (n%10!=0 || n>9){//t,t,t,f,,
      sum+=n%10;//2,11,20
      n=n/10;//99,9,0
    }
  if (sum%10==0){
      n=sum/10;
  }
  else{
    n=sum;//
  }
  }
  return n;
}