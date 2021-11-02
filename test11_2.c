//统计元音字母的个数 
#include <stdio.h>
int main()
{
    char letter;
	int count=0;
	for (letter='A';letter<='Z';letter++)
	switch(letter)
	{case'A':
	 case'E':
	 case'I':
	 case'O':
	 case'U':count++;
	 } 
	 printf("The Number Of Vowels Is %d\n",count);
	
	 return 0;
}
