#include<stdio.h>
void main()
{
int n,m,d;
printf("Enter the number of days.\n");
scanf("%d",&n);
m=n/30;
d=n%30;
printf("The answer is %d months and %d days.\n",m,d);
}
