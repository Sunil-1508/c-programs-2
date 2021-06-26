#include<stdio.h>
#include<string.h>
struct details
{
	int roll;
	int id;
	char name[20];
}s;
main()
{
	int i=0,n=3;
	struct details de[20];
	printf("enter employee details:\n");
	for(i=0;i<n;i++)
	{
		printf("\nenter rollno of %d employee",i+1);
		scanf("%d",&de[i].roll);
		printf("enter id of %d employee",i+1);
		scanf("%d",&de[i].id);
		printf("enter name of the %d employee",i+1);
		scanf("%s",&de[i].name);
	}
	printf("\nTHE DETAILS OF THE EMPLOYEES:\n");
	printf("Name\tRoll\tid\n");
	for(i=0;i<n;i++)
	{
		printf("\n%s\t%d\t%d",de[i].name,de[i].roll,de[i].id);
	}
}
	
	
