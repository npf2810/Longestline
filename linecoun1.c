#include<stdio.h>
#define IN 1
#define OUT 0
main(){
int c,state,nl,nc,nw;
nl=nc=nw=0;
while((c=getchar())!=EOF)
{
	++nc;
  if(c=='\n')
    ++nl;
  if(c==' ' || c=='\t' || c=='\n')
  {
	  state=OUT;
	  putchar(c);
  }
  else
  {
	  state=IN;
          ++nw;
	  putchar(c);
  }
}
printf("%d,%d,%d\n",nl,nc,nw);
}
