#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>

bool isValidWalk(const char *walk) {

    int length=0;
    int sum=0;
    while (*walk!='\0'){
      length++;
      if (*walk=='n'){
        sum++;
      }
      else if(*walk=='s'){
        sum--;
      }     
      else if(*walk=='e'){
        sum+=2;
      }
      else if(*walk=='w'){
        sum-=2;
      }     
      walk++;
    }
    if (length>10 || length<10){
      return false;
    }
    else if(sum==0){
      return true;
    }
    else{
      return false;
    }
  }