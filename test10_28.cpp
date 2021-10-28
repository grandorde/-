/*输入一个字符，判断它是大写，小写，数字还是其他字符*/
#include <stdio.h>
int main()
{
	char ch;
	printf("请输入一个字符：");
	ch=getchar();
	if(ch>='A'&&ch<='Z')
	 printf("该字符是大写字母");
	else if(ch>='a'&&ch<='z')
	 printf("该字符是小写字母");
	else if(ch>='0'&&ch<='9')
	 printf("该字符是数字") ;
	else
	 printf("该字符为其他类型");
	return 0;
}

