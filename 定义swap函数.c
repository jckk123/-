#include <stdio.h>
int swap (int a, int b);
int main()
{
	int a;
	int b;
	
	printf("������a��ֵ:");

	scanf("%d",&a);
	printf("������b��ֵ:");
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
