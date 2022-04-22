#include<stdio.h>

void main()
{
int i,n,s=0,rem;
printf("Enter any number: ");
scanf("%d",&n);
while(n>=1)
{
rem=n%10;
n=n/10;
s+=rem;
}
printf("Sum = %d",s);
}

