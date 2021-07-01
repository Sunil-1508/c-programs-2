#include<stdio.h>
int fabanicci(int);
main()
{
	int n,i,m=0;
	printf("enter no of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",fabanicci(m));
		m++;
		
	}
}
int fabanicci(int n)
{
	if(n==0 || n==1)
	return n;
	else
	return(fabanicci(n-1)+fabanicci(n-2));
}
