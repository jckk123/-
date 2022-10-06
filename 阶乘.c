#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=1;
	int b=1;
	while(b<=n)
	{
		a*=b;
		b++;
	}
	printf("%d",a) ;
    return 0;
	} 
