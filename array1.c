#include<stdio.h>
main()
{
 int c,nwhite,nothers,ndigits[10],i;
 nwhite=nothers=0;
 for(i=0;i<10;++i)
	 ndigits[i]=0;
 while((c=getchar())!= EOF)
 {
    if(c>='0' && c<='9')
		++ndigits[c-'0'];
	else if(c==' ' || c=='\t' || c=='\n')
		++nwhite;
	else
		++nothers;
 }
 printf("no of digits\n");
 for(i=0;i<10;++i)
	 printf("At the postion %d - %d\n",i,ndigits[i]);
 printf("no of whitespace and other characters %d,%d",nwhite,nothers);
}