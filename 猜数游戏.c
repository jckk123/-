#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{srand(time(0));
 int a=rand()%100+1;
 int b=0;
 int count=0;
 printf("我已经选好了一个1-100的数。\n");
 do{
 	printf("请输入您猜的数：");
 	scanf("%d",&b);
 	count++;
 	if(b>a){
 		printf("您猜的数大了。");
		 } else if(b<a){
		 	printf("您猜的数小了。"); 
		 } 
	 }while (b!=a);
	 printf("太好了，您用了%d次就猜到了答案。\n",count);
	 return 0;
 }
 
