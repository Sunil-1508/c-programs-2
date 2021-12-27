#include<stdio.h>


int main()
{
int s[5];
int i,ind,n=5,ele;
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
printf("\n enter index at which u want to delete element");
scanf("%d",&ind);
printf("\nenter ele");
scanf("%d",&ele);
for(i=n-1;i>=ind;i--)
{
s[i+1]=s[i];
}
s[ind]=ele;
for(i=0;i<n;i++)
{
printf("%d",s[i]);
}
}
