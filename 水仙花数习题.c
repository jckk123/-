#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=1;
	while(n>1)
	{
		a*=10;
		n--;
	}
	int b=a;
	int sum=0;
	while (b<10*a)
	{
		while(b>0)
		{
		int c;
		c=b%10;
		b/=10;	
		int d=1;
		int e=0;
		while (e<n)
		{
			d*=c;
			e++;
		    sum+=d;
		}
		
		}
		b++;
	
		if(sum=b)
		{
			printf("%d",b);
		}
	}
	
	return 0;
}
