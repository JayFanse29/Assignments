#include<stdio.h>

void main()
{
int i,a=0,b=1,c,n;
printf("ENTER THE VALUE OF N: ");
scanf("%d",&n);
printf("%d %d ",a,b);
c=a+b;
for(i=2;i<n;i++)
{
printf("%d ",c);
a=b;
b=c;
c=a+b;
}
}




