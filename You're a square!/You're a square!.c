#include <stdbool.h>
#include <math.h>

bool is_square(int n) {
  
  int b;
  double a;
  a=sqrt(n);
  b=a;
  if (a==b){return true;} else{return false;}
  return 0;
}