/*输入一个数，输出它的绝对值*/ 
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>=0)
    printf("|a|=%d\n",a);
	else
    printf("|a|=%d\n",-a);
	return 0;
	
}
