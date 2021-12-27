#include<stdio.h>
#include<string.h>
int main()
{
int i,j,flag=0;
char a[20],b[20];
printf("\nenter first string\n");
gets(a);
printf("\nenter second string\n");
gets(b);
for(i=0,j=0;a[i]!='\0'&&b[j]!='\0';i++,j++)
{
if(a[i]!=b[j])
flag++;
}
if(flag==0)
printf("\ntwo strings are equall\n");
else
printf("\nnot equall");
return 0;
}