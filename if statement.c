#include <stdio.h>
#include <stdlib.h>

int numbers(int a, int b) //two parameters
{
  int result;
  if (a>b) result= a;
  else result = b;
  return result;
}

int main()
{

  printf("%d", numbers(2,3));
  return 0;
}










