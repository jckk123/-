#include <stdio.h>
int main()
{
	printf("请输入一个不超过6的正整数：");
	int a=0;
	scanf("%d",&a);
	int i;
	int k;
	int j;
	int cnt=0;
	for(i=a;i<=a+3;i++)
	{
		for(k=a;k<=a+3;k++)
		{
			for(j=a;j<=a+3;j++)
			{
				if(i!=j)
				{
					if(j!=k)
					{
						if(k!=i){
				
						cnt++;
						printf("%d%d%d",i,j,k);
						if(cnt==6)
						{
							printf("\n");
				            cnt=0;
					}
					else{
						printf(" ");
					}
				}
			}
				}
			}
		}
	}
		
	return 0; 
}
