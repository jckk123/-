#include <stdio.h>
int main()
{
	int foot=0;
	int inch=0;
	printf ("������������ߣ�Ӣ�� Ӣ�磩��");
	scanf ("%d %d",&foot,&inch);
	double m=(foot+inch/12.0)*0.3048;
	printf("��������ǣ�%f",m);
	return 0;
}
