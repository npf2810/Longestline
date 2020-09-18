#include<stdio.h>
#define MAXLINE 1000
int get(char line[]);
void copy(char to[],char from[]);
main()
{
 int len;
 int max;
 char line[MAXLINE];
 char longest[MAXLINE];
 max=0;
 while((len=get(line))>0){
    if(len>max){
		max=len;
        copy(longest,line);
	}
 }
 if(max>0)
	 printf("%d,%s",max,longest);
return 0;
}
int get(char line[]){
  int c,i;
  for(i=0;i<MAXLINE && (c=getchar())!=EOF && c!='\n';++i){
    line[i]=c;
  }
  if(c=='\n'){
    line[i]=c;
	++i;
  }
  line[i]='\0';
  printf("%d",i);
  return i;
}
void copy(char to[],char from[]){
  int i;
  i=0;
  while((to[i]=from[i]) !='\0')
	  ++i;
  
}