#include<stdio.h>

int main()
{
int a=10,b=20;
int *ptr1,*ptr2,*ptr3;
ptr1=&a;
ptr2=&b;
*ptr3=*ptr2;
printf("\n%d",*ptr3);
*ptr2+=*ptr3;
printf("\n%d",*ptr2);
*ptr3*= *ptr2;
printf("\n%d",*ptr3);
return 0;
}