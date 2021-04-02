
#include <stdio.h>

void TOH(int n, char a, char b, char c)
{
	if (n>0)
	{
	  TOH(n-1, a, c, b);
	  printf("Remove Disk '%c' and Enter in '%c'\n",a,c);
	  TOH(n-1, b, a, c);
	 }
}

int main ()
{
  int n;
  char a,b,c;
  printf("Enter a Number\n");
  scanf("%d",&n);
  TOH(n, 'a', 'b', 'c');
  return (1);
}
