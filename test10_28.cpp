/*����һ���ַ����ж����Ǵ�д��Сд�����ֻ��������ַ�*/
#include <stdio.h>
int main()
{
	char ch;
	printf("������һ���ַ���");
	ch=getchar();
	if(ch>='A'&&ch<='Z')
	 printf("���ַ��Ǵ�д��ĸ");
	else if(ch>='a'&&ch<='z')
	 printf("���ַ���Сд��ĸ");
	else if(ch>='0'&&ch<='9')
	 printf("���ַ�������") ;
	else
	 printf("���ַ�Ϊ��������");
	return 0;
}

