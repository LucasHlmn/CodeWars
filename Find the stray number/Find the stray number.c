#include <stddef.h>
#include <stdio.h>
#include <stdbool.h>
int stray(size_t n, int arr[n]) {
  for (size_t i=0; i<n;i++){
    int count_i=0;
    for(size_t j=0; j<n;j++){
      if (arr[i]==arr[j]){
        count_i++;
      }
      else{
        continue;
      }
    }
    if(count_i==1){
      return arr[i];
    }
    else{
      continue;
    }
  }
  return 0;
}