#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c;
	printf("��������Ҫ���������",a);
	scanf("%d",&a);
	while (a>0){
	b=a%10;
	//printf("%d",b);
	c=c*10+b;
	a/=10;
	//printf("a=%d,b=%d,c=%d\n",a,b,c);
	} 
	 printf("���������ǣ�%d",c);
	 return 0;
	
 } 
