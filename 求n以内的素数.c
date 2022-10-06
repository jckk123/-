#include <stdio.h>
int main()
{

	int number;
	printf("请输入您要求多少以内的素数：");
	scanf("%d",&number);
	int a[number];
	int k;
	for(k=0;k<number;k++)
	{
		a[k]=1;
	}
	int i;
	int j;
	for(i=2;i<number;i++){
		if(a[i])
		{
			for(j=2;i*j<number;j++)
			{
				a[i*j]=0;
			}
	    }
		}
	for(i=2;i<number;i++)
	{
		if(a[i])
		{
			printf("%d",i);
		}
	}
	printf("\n");
	return 0;
}
