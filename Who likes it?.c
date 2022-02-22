#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// return must be an allocated string to be freed by the tester

char *likes(size_t n, const char *const names[n]) {

    //  <----  hajime!
	char *buf;
	size_t sz;

  if (n == 0)
    {
	sz = snprintf(NULL, 0, "no one likes this");
	buf = (char *)malloc(sz + 1); 
	snprintf(buf, sz+1, "no one likes this");
	printf("%s",buf);
	return buf;
    }
  else if (n == 1)
    {
	sz = snprintf(NULL, 0, "%s likes this", names[0]);
	buf = (char *)malloc(sz + 1); 
	snprintf(buf, sz+1, "%s likes this", names[0]);
	printf("%s",buf);
	return buf;
  }
  else if (n == 2)
    {
	sz = snprintf(NULL, 0, "%s and %s like this", names[0], names[1]);
	buf = (char *)malloc(sz + 1); 
	snprintf(buf, sz+1, "%s and %s like this", names[0], names[1]);
	printf("%s",buf);
	return buf;
  }
  else if (n == 3)
    {
	sz = snprintf(NULL, 0, "%s, %s and %s like this", names[0], names[1], names[2]);
	buf = (char *)malloc(sz + 1); 
	snprintf(buf, sz+1, "%s, %s and %s like this", names[0], names[1], names[2]);
	printf("%s",buf);
	return buf;

  }
  else
    {
	sz = snprintf(NULL, 0, "%s, %s and %zu others like this", names[0], names[1], n-2);
	buf = (char *)malloc(sz + 1); 
	snprintf(buf, sz+1, "%s, %s and %zu others like this", names[0], names[1], n-2);
	printf("%s",buf);
	return buf;
    }
}
int main (void)
{
	const char *const names[6] = {"Peter","Lucas","Rimo","John","Luc","Johan"};
	likes(6, names);
	return 0;
}