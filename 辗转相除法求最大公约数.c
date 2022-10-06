#include <stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("请输入a的值：");
	scanf("%d",&a);
	printf("请输入b的值：");
	scanf("%d",&b);
	while(b!=0)
	{
		c=a%b;
		a=b;
		b=c;
		printf("a=%d,b=%d,c=%d\n",a,b,c);
	}
	printf("a,b的最大公约数是%d",a);
	return 0;
 } 
