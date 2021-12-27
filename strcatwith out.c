#include<stdio.h>
#include<string.h>
int main()
{
int i,j,len=0;
char a[20],b[20];
printf("\nenter first string\n");
gets(a);
printf("\nenter second string\n");
gets(b);
for(i=0;a[i]!='\0';i++)
{
len++;
}
for(j=0;b[j]!='\0';len++,j++)
{
a[len]=b[j];
}
a[len]='\0';
printf("\nthe concatenated string is \n");
puts(a);
return 0;
}