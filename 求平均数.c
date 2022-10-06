#include <stdio.h>
int main()
{
	int a=0;
	int count=0;
	int sum=0;
	while(a!=-1)
	{
		scanf("%d",&a);
	    sum+=a;
	    count++;
}
    printf("平均数是：%f",(1.0*sum+1)/(count-1));
    return 0;
	
}
