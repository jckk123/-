 #include <stdio.h>
int main()
{
	int x=0;
	int n=0;
	scanf("%d",&x);

	do{
		x /= 10;
		n++;
	}while (x>0);
	printf("%d",n);
	
 return 0;} 
