#include<stdio.h>
#include<string.h>
int main()
{
int i,len,flag=0;
char a[20];
printf("\nenter first string\n");
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(a[i]!=a[len-i-1])
flag=1;
break;
}
if(flag==1)
printf("\nnot");
else
printf("\n yes");
return 0;
}