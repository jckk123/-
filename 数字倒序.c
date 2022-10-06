#include <stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c;
	printf("请输入你要倒序的数：",a);
	scanf("%d",&a);
	while (a>0){
	b=a%10;
	//printf("%d",b);
	c=c*10+b;
	a/=10;
	//printf("a=%d,b=%d,c=%d\n",a,b,c);
	} 
	 printf("倒序后的数是：%d",c);
	 return 0;
	
 } 
