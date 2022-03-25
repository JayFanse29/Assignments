#include<stdio.h>
void main()
{
float n,n1;
int i,m;
printf("Enter the amount.\n");
scanf("%f",&n);
i=n;
n1=n-i;
m=n1*1000000-1;
while(m%10==0)
{
m=m/10;
}
printf("The amount is %d rupees and %d paisa.\n",i,m);
}
