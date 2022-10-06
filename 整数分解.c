/*#include <stdio.h>
int main()
{
	int a=0;
	scanf("%d",&a);
	int b=0;
	int c=0;
	while(a>0){
	b=a%10;
	a/=10;
	c=c*10+b;}
	int t;
	while(c>0)
	{
		t=c%10;
		c/=10;
		printf("%d ",t);
	}
	return 0;
} */

#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a;
	int wei=0;
	while(a>0)
	{
		a/=10;
		wei++;
	}
	//int c=pow(10,wei-1);
	int c=1;
	wei=wei-1;
	while(wei>0)
	{
		c*=10;
		wei--;
	}
	int t;
	while(c>0)
	{
		t=b/c;
		printf("%d ",t);
		b=b%c;
		c/=10;
	}
	return 0;
}
 
 
 
 
