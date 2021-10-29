/*用for语句算出1到100的和*/
#include <stdio.h>
int main()
{
	int i=1;
	int sum=0;
	for(i=1;i<=100;i++)
	{
		sum+=i;
		
	}
	printf("sum=%d",sum);
	return 0;
 } 
