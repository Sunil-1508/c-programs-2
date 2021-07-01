#include<stdio.h>
#include<string.h>
main()
{
	char st[20];
	int i;
	printf("enter name in lower case: ");
	gets(st);
	for(i=0;st[i]!='\0';i++)
	{
		if(st[i]>='a'&& st[i]<='z')
		{
			st[i]=st[i]-32;
		}
		
	}
	printf("upper case is :");
	printf("%s",st);
}

