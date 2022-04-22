#include<stdio.h>
void main()
{
int n,i=0,sum=0;
float a;
printf("Type 0 to exit.\n");
while(n!=0)
{
printf("Enter number %d:",i+1);
scanf("%d",&n);
i++;
sum+=n;
}
a=sum/(i-1);
printf("The average of all numbers: %f",a);
}

