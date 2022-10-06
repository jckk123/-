#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t;
    double sum=0.0;
    double c=1.0;
	for(t=1;t<=n;t++)
	{
		sum+=c/t;
		c=-c;
	    
	}
	printf("%f",sum);
	
	return 0;
 } 
