#include <stdio.h>

int main()
{
  int a[20];
  int i;
  
  for (i=0; i<10; i++)
    a[i]=i*2;
  
  for (i=0; i<10; i++)
    printf ("a[%d]=%d\n", i, a[i]);
  
  return 0;
};
