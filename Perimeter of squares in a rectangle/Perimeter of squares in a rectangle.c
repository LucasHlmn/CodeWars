#include <stdio.h>
#include <stdlib.h>
typedef unsigned long long ull;

ull ft_fibonacci(unsigned long long int index)
{
  unsigned long long int n;
  unsigned long long int result;
  unsigned long long int previous_num;
  unsigned long long int previous_prev_num;

  if (index < 0)
    return (-1);
  if (index < 2)
  {
    printf("result %d\n", 1);
    return (1);
  }
  
  n = 2;
  previous_num = 1;
  previous_prev_num = 1;
  result = 2;
  while (n + 1 <= index)
    {
      previous_prev_num = previous_num;
      previous_num = result;
      result = previous_num + previous_prev_num;
      n++;
    }
  printf("result %llu\n", result);
  return (result);
}

ull perimeter(int n) {
unsigned long long int fibo_sum;

  fibo_sum = 0;
  printf("n is %d\n",n);
  
  while (n >= 0)
    {
      fibo_sum += ft_fibonacci(n);
   n--;
    }
printf("fibo sum is %llu\n", fibo_sum);
printf("perimeter is %llu\n", 4* fibo_sum);

return (4*fibo_sum);
}