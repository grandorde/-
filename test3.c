/*输入实型变量x和y，若x>y,输出x-y的值，如果下x<y,输出y-x的值*/
#include <stdio.h>
int main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	if(x>y)
	  printf("%f",x-y);
	else
	  printf("%f",y-x);
 } 
