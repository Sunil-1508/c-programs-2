#include<stdio.h>
main(){
int max(int,int,int,int);
int d,c,a,b,big;
scanf("%d%d%d%d",&a,&b,&c,&d);
big=max(a,b,c,d);
printf("the largest among 4 is:");
printf("%d",big);
}
int max(int a,int b,int c,int d)
{
int big;
big=(a>b&&a>c&&a>d)?a:(b>a&&b>c&&b>d)?b:(c>d)?c:d;
return big;
}