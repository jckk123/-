#include <stdio.h>
int main()
{
	int foot=0;
	int inch=0;
	printf ("请输入您的身高（英尺 英寸）：");
	scanf ("%d %d",&foot,&inch);
	double m=(foot+inch/12.0)*0.3048;
	printf("您的身高是：%f",m);
	return 0;
}
