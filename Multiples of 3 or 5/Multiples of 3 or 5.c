#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
int solution(int number) {
    // code here
  //check is number >=0 --> yes step2, no return 0
  if (number<0){
    return 0;
  }
  //2. for each number in array 0 to n
  //check if n%5 or n%3 ==0-->if so make sum of those number and return it

  else{
    int sum=0;
    for (int i=0; i<number; i++){
      if(i%5==0 || i%3==0){
        sum+=i;
      }
    }
     return sum;
    
  }
    return 0;
}