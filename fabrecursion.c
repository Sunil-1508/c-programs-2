#include<stdio.h>
int fab(int);
int main()
{
    int n,m=0,i;
    printf("\nenter total terms");
    scanf("%d",&n);
    printf("\nfabonicci series are\n");
    for(i=1;i<=n;i++)
    {
    printf("%d\n",fab(m));
    m++;
    }
    return 0;
}
int fab(int n)
{
if(n==0||n==1)
{
return n;
}
else
{
return (fab(n-1)+fab(n-2));
}
}