/*用while语句求1到100的和*/ 
#include <stdio.h>
int main()
{
	int i=1;
	int sum=0;
	while(i<=100)
	{
		sum+=i;
		i++;
	}
	printf("%d",sum);
	return 0;
}
