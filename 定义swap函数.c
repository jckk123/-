#include <stdio.h>
int swap (int a, int b);
int main()
{
	int a;
	int b;
	
	printf("请输入a的值:");

	scanf("%d",&a);
	printf("请输入b的值:");
	scanf("%d",&b);
	swap(a,b);
	return 0;
}
int swap(int a,int b)
{
	int t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d",a,b);
}
