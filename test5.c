#include <stdio.h>
int main()
{
	int a=2;
	if(a>0)
	  a-=2;
	else if(a==0)
	  a-=2;
	else
	a+=10;
	printf("%d\n",a);
	return 0;
}
