/*��ֶκ���y=f(x)��ֵ��f(x)���ʽ��f(x)={x*x-1  (x<-1)
                                          x*x    (-1<=x<=1)
                                          x*x+1  (x>1)      */
#include <stdio.h>
int main()
{int x;
 scanf("%d",&x);
 if(x<-1)
   printf("f(x)=%d",x*x-1);
 else if(x>=-1&&x<=1)
   printf("f(x)=%d",x*x);
 else
   printf("f(x)=%d",x*x+1); 
   return 0;}                                          
                                        
