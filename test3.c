/*����ʵ�ͱ���x��y����x>y,���x-y��ֵ�������x<y,���y-x��ֵ*/
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
