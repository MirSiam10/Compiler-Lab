#include<stdio.h>
int main(){
char ch[50];
int i=0,count=0;
printf("Enter a string:");
gets(ch);
while(ch[i]!='\0')
{
count++;
i++;
}
printf("The length is:%d\n",count);
return 0;
}
