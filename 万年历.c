#include <stdio.h>
#include <stdlib.h>

int run(int year) {
	
	//�жϸ��������껹��ƽ��
	if ((year%4==0&&year%100!=0)||(year%400==0))
	{
	return 366;
	}
	else
	{
	return 365;
	 } 
}

int main()
{
	//�˵�
	printf("\t\t\t������\t\t\t\n");
	printf("\t\t1.@���������������@\n");
	printf("\t\t2.@����ĳһ���λ��@\n");
	printf("\t\t     3.@�˳�@\n");
	printf("����������Ҫִ�еĲ�����");
	 
    int year;
    int m;
    int day;
    int a=1900;
    int t;
    int sum=0;
    int b;
    int c;
    int d; 
    int e;
    int r;
    int f;
    int g=0;
    int h;
    int nian;
	
    //ÿ���µ����� 
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
	if(run(year)==366){
		month[1]=29;
	}

    //ѡ����еĲ��� 
    scanf("%d",&t);
    
    //1.@���������������@
	if(t==1)
	{
		printf("����������Ҫ��������������ݣ�"); 
		scanf("%d",&year);
		
		//�������1��1�յ�1900��1��1�յľ���
		for(a=1900;a<year;a++)
    {
        sum+=run(a);
	
    }
    
    //��һ��һ�������ڼ� 
    e=b=sum%7;
    printf("%d",b);
    //������� 
    for (c=0;c<12;c++){
    	
	printf("                     %d��\n",c+1);
    printf("    һ    ��    ��    ��    ��    ��    ��\n");
    printf("    **************************************\n");
    
    for(d=1;d<=month[c];d++)
    {
    	for(b;b>0;b--)
    {
    	printf("      ");
	}
	//����һλ�����λ�����һ���ո�ʹ���������� 
    	if (d<10){
    		printf("     %d",d);
		}
    	else{
		printf("    %d",d);
	}
	//�����һ�ܻ��� 
    	if((e+d)%7==0)
    	{
    		printf("\n");
		}
}
	e+=month[c];
	b=e%7;
	printf("\n\n");
    } 
	}
	
	//2.@����ĳһ���λ��@
	if(t==2){
		printf("����������Ҫ��ѯ�����ڣ��� �� �գ���");
		scanf("%d %d %d",&nian,&m,&r) ;
		
		//������쵽1900��1��1�յľ��� 
        for(f=1900;f<nian;f++)
    {
        sum+=run(f);
	
    }
        for(g=0;g<m-1;g++)
        {
        	sum+=month[g];
		}
		
		//��1��1�������ڼ�
		h=sum%7;
		
		//�������
		printf("                     %d��\n",m);
        printf("    һ    ��    ��    ��    ��    ��    ��\n");
    	printf("    **************************************\n");
    	for(h;h>0;h--)
    {
    	printf("      ");
	}
     for(h=1;h<=month[m-1];h++)
     {
     	
     	//���ʱ����һλ������λ���Ŀո񣬲���if�������������ǰ�����Ǻ��
    if (h<10&&h!=r){
    		printf("     %d",h);
		}
    	else if(h>=10&&h!=r)
		{
		printf("    %d",h);
	}
	else if(h<10&&h==r)
	{
		printf("    *%d",h);
		
	}
     	else{
     		printf("   *%d",h);
		 }
		 //�����һ������ʱ����
		 if((h+month[m-1])%7==0)
    	{
    		printf("\n");
		}
}
    printf("\n");
	 }
    
		
	
	
	//3.@�˳�@
	else{
		return 0;
	}
	
	//��ֹ����
	system("pause");
	 
	return 0;
 } 
