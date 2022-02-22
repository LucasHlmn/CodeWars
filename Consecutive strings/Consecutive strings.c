//n is strarr size
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* longestConsec(char* strarr[], int n, int k) {
  char *str;
  int i;
  int j;
  unsigned long int len;
  int count;
  char *final_str;
  
  
  i = 0;
  final_str=(char *)malloc(sizeof(char)*0);
  len = 0;
  if (n==0 || k > n || k <= 0)
     return (final_str);
  while (i < n)
  {
    str = (char *)malloc(sizeof(char)*100);
    count = 0;
    j = i;
    printf("test %s\n", str);
    while (j < n && count < k)
      {
        strcat(str,strarr[j]);
        j++;
        count++;
      }
    if (strlen(str)>len)
      {
        len = strlen(str);
        final_str = str;
      }
     i++;
  }
  printf("final %s\n", final_str);
  return (final_str);
}