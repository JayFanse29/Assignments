#include<stdio.h>
#include<math.h>
void main()
{
float p,r,n,t,a,i,m,l,j;
printf("Enter initial amt, rate of interest, number of times interest applied per time period and time period.\n");
scanf("%f %f %f %f",&p,&r,&n,&t);
m=1+r/n;
l=n*t;
j=pow(m,l);
a=p*j;
i=a-p;
printf("The compound interest is: %f\nThe total amount is: %f",i,a);
} 
