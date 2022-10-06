# include <stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int type=x>=0;
	int a=x>0;
	switch(type){
	case 0:
		printf("f(x)=-1\n");break;
	case 1:
		switch(a){
			case 1:
			printf("f(x)=%d\n",2*x);break;
			case 0:
			printf("f(x)=1\n");break;}
	}
		
  return 0;
 } 
