#include<stdio.h>
#include<string.h>
int main()
{
int i;
char a[20],b[20];
printf("\nenter first string\n");
gets(a);
for(i=0;a[i]!='\0';i++)
{
b[i]=a[i];
}
b[i]='\0';
printf("\nthe copied string is \n");
puts(b);
return 0;
}