#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{srand(time(0));
 int a=rand()%100+1;
 int b=0;
 int count=0;
 printf("���Ѿ�ѡ����һ��1-100������\n");
 do{
 	printf("���������µ�����");
 	scanf("%d",&b);
 	count++;
 	if(b>a){
 		printf("���µ������ˡ�");
		 } else if(b<a){
		 	printf("���µ���С�ˡ�"); 
		 } 
	 }while (b!=a);
	 printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n",count);
	 return 0;
 }
 
