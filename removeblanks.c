#include<stdio.h>
#define MAX 1000
int get(char line[]);
int removetrail(char line[]);
main(){
int len;
char line[MAX];
while(len=get(line)>0){
	if(removetrail>0)
		printf("%s",line);
}
return 0;
}
int get(char line[]){
int c,i;
for(i=0;i<MAX-1 && (c=getchar())!=EOF && c!='\n';++i)
	line[i]=c;
if(c=='\n'){
  line[i]=c;
  ++i;
}
line[i]='\0';
printf("%d",i);
return i;
}
int removetrail(char line[]){
int i;
for(i=0;line[i]!='\n';++i)
	;
--i;
for(i>=0;line[i]==' ' || line[i]=='\t';--i)
	;
if(i>=0){
++i;
line[i]='\n';
++i;
line[i]='\0';
}
printf("%d",i);
return i;
}