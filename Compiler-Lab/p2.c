#Write a C Program that will count the number of white spaces in a string.

#include<stdio.h>
int main(){
char s1[100];
int i=0,k,count=0,space=0;
printf("Please Enter a string:");
gets(s1);
for(k=0;s1[k]!='\0';k++)
if (s1[k]==' ')
space++;
printf("No of space in the string:%d\n",space);
return 0;

}
#include<stdio.h>
int main(){
char s1[100];
int i=0,k,count=0,space=0;
printf("Please Enter a string:");
gets(s1);
for(k=0;s1[k]!='\0';k++)
if (s1[k]==' ')
space++;
printf("No of space in the string:%d\n",space);
return 0;

}

