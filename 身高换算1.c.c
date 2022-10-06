# include  <stdio.h>
int main()
{
	double yinchi=0;
	double yincun=0;
	printf ("请输入您的身高：");
	scanf ("%lf,%lf",&yinchi,&yincun) ;
	double shengao=(yinchi+yincun/12.0)*0.308 ;
	printf ("您的身高是:%f",shengao); 
 } 
