#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("������a��ֵ��");
	scanf("%d",&a);
	printf("������b��ֵ��");
	scanf("%d",&b);
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
	}
	printf("a,b�����Լ����%d",a);
	return 0;
 } 
