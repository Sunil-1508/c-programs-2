#include<stdio.h>


int main()
{
int s[5];
int i,ind,n=5;
for(i=0;i<n;i++)
{
scanf("%d",&s[i]);
}
printf("\n enter index at which u want to delete element");
scanf("%d",&ind);
for(i=ind;i<n;i++)
{
s[i]=s[i+1];
}
n=n-1;
for(i=0;i<n;i++)
{
printf("%d",s[i]);
}
}
