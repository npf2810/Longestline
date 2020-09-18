#include<stdio.h>
#define MAX 1000
int get(char line[]);
main(){
int len;
char line[MAX];
while((len=get(line))>0){
if(len>80)
	printf("%s",line);
}
return 0;
}
int get(char line[]){
int i,c;
for(i=0;i<MAX && (c=getchar())!=EOF && c!='\n';++i)
	line[i]=c;
if(c=='\n'){
	line[i]=c;
    ++i;
}
line[i]='\0';
printf("%d\n",i);
return i;
}

