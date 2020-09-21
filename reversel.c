#include<stdio.h>
#define MAX 1000
int get(char line[]);
int reverse(char line[]);
main(){
int len;
char line[MAX];
while(len=get(line)>0){
	if(reverse(line)>0)
	   printf("%s",line);
}

return 0;
}
int get(char line[]){
int i,c;
for(i=0;i<MAX-1&&(c=getchar())!=EOF && c!='\n';++i)
	line[i]=c;
if(c=='\n'){
line[i]='\0';
++i;
}
printf("%d",i);
return i;
}
int reverse(char line[]){
int i,j,count;
char temp;
for(i=0;line[i]!='\0';++i)
	++count;
--i;
if(line[i]=='\n')
	--i;
for(j=0;j<i;++j){
temp=line[j];
line[j]=line[i];
line[i]=temp;
--i;

}
return j;
}