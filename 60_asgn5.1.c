#include<stdio.h>
void main()
{
int n,i,sum=0,a;
printf("Enter the value of n\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
printf("%3d",i);
}

for(i=1;i<=n;i++)
{
sum+=i;
}
a=sum/n;
printf("\n\nThe sum of first n numbers is %d\nThe average of first n numbers is %d\n",sum,a);
}
  
