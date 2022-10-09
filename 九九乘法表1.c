 #include <stdio.h>
int main()
{
	int i;
	int j;
	int k;
for(i=1;i<10;i++){
	for(j=1;j!=i+1;j++){
		k=i*j;
		printf("%d*%d=%d ",j,i,k);
	}
	printf("\n");
}
	return 0;
}
