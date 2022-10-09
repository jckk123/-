#include <stdio.h>
#include <stdlib.h>

int run(int year) {
	
	//ÅĞ¶Ï¸ÃÄêÊÇÈòÄê»¹ÊÇÆ½Äê
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
	//²Ëµ¥
	printf("\t\t\tÍòÄêÀú\t\t\t\n");
	printf("\t\t1.@²éÕÒËùÔÚÄêµÄÈÕÀú@\n");
	printf("\t\t2.@²éÕÒÄ³Ò»ÌìµÄÎ»ÖÃ@\n");
	printf("\t\t     3.@ÍË³ö@\n");
	printf("ÇëÊäÈëÄúÏëÒªÖ´ĞĞµÄ²Ù×÷£º");
	 
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
	
    //Ã¿¸öÔÂµÄÌìÊı 
	int month[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
	if(run(year)==366){
		month[1]=29;
	}

    //Ñ¡Ôñ½øĞĞµÄ²Ù×÷ 
    scanf("%d",&t);
    
    //1.@²éÕÒËùÔÚÄêµÄÈÕÀú@
	if(t==1)
	{
		printf("ÇëÊäÈëÄúÏëÒª²éÈÕÀúµÄËùÔÚÄê·İ£º"); 
		scanf("%d",&year);
		
		//¼ÆËã¸ÃÄê1ÔÂ1ÈÕµ½1900Äê1ÔÂ1ÈÕµÄ¾àÀë
		for(a=1900;a<year;a++)
    {
        sum+=run(a);
	
    }
    
    //ÇóÒ»ÔÂÒ»ºÅÊÇĞÇÆÚ¼¸ 
    e=b=sum%7;
    printf("%d",b);
    //Êä³öÈÕÀú 
    for (c=0;c<12;c++){
    	
	printf("                     %dÔÂ\n",c+1);
    printf("    Ò»    ¶ş    Èı    ËÄ    Îå    Áù    ÈÕ\n");
    printf("    **************************************\n");
    
    for(d=1;d<=month[c];d++)
    {
    	for(b;b>0;b--)
    {
    	printf("      ");
	}
	//²¹ÆëÒ»Î»ÊıÓë¶şÎ»ÊıÏà²îÒ»¸ö¿Õ¸ñ£¬Ê¹Êä³ö±äµÃÃÀ¹Û 
    	if (d<10){
    		printf("     %d",d);
		}
    	else{
		printf("    %d",d);
	}
	//Êä³öÂúÒ»ÖÜ»»ĞĞ 
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
	
	//2.@²éÕÒÄ³Ò»ÌìµÄÎ»ÖÃ@
	if(t==2){
		printf("ÇëÊäÈëÄúÏëÒª²éÑ¯µÄÈÕÆÚ£¨Äê ÔÂ ÈÕ£©£º");
		scanf("%d %d %d",&nian,&m,&r) ;
		
		//Ëã³ö¸ÃÌìµ½1900Äê1ÔÂ1ÈÕµÄ¾àÀë 
        for(f=1900;f<nian;f++)
    {
        sum+=run(f);
	
    }
        for(g=0;g<m-1;g++)
        {
        	sum+=month[g];
		}
		
		//Çó1ÔÂ1ÈÕÊÇĞÇÆÚ¼¸
		h=sum%7;
		
		//Êä³öÈÕÀú
		printf("                     %dÔÂ\n",m);
        printf("    Ò»    ¶ş    Èı    ËÄ    Îå    Áù    ÈÕ\n");
    	printf("    **************************************\n");
    	for(h;h>0;h--)
    {
    	printf("      ");
	}
     for(h=1;h<=month[m-1];h++)
     {
     	
     	//Êä³öÊ±²¹ÆëÒ»Î»ÊıÓëÁ½Î»ÊıµÄ¿Õ¸ñ£¬²¢ÓÃifÓï¾äÔÚËùÇóÈÕÆÚÇ°±êÉÏĞÇºÅó
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
		 //Êä³öÂúÒ»¸öĞÇÆÚÊ±»»ĞĞ
		 if((h+month[m-1])%7==0)
    	{
    		printf("\n");
		}
}
    printf("\n");
	 }
    
		
	
	
	//3.@ÍË³ö@
	else{
		return 0;
	}
	
	//·ÀÖ¹ÉÁÍË
	system("pause");
	 
	return 0;
 } 
