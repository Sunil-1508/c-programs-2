#include<stdio.h>
main()
{
	int m,n,p,q,i,j,k,sum=0;
	int a[30][30],b[30][30],multip[30][30];
	printf("\nenter no of rows and coloumns of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("\nenter the first martix\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
	    }
	}
	printf("\nenter no of rows and coloumns of second matrix\n");
	scanf("%d%d",&p,&q);
	if(n!=p)
	{
		printf("\nmatrix of given order is not possible");
		
	}
	else
	printf("\nenter second matrix\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			for(k=0;k<p;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			multip[i][j]=sum;
			sum=0;
		}
	}
printf("\n the sproduct of matrices is\n");
for(i=0;i<m;i++)
{
	for(j=0;j<q;j++)
	{
		printf("%d\t",multip[i][j]);
	}
	printf("\n");
}
}

