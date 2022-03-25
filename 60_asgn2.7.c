#include<stdio.h>
void main()
{
/*
float i,p,r,t,a;            
printf("Enter the initial amount, rate of interest and time (years).\n");
scanf("%f %f %f",&p,&r,&t);
i=p*r*t/100;
a=p+i;
printf("The simple interest is: %f\nThe final amount: %f\n", i,a);
}
*/

int i,p,r,t,a;
printf("Enter initial amt, rate of interest and time(years).\n);
scanf("%d %d %d", &p,&r,&t);
(float)i=p*r*t/100;
(float)a=p+i;
printf("The simple interest is: %f\nThe total amount is : %f",i,a);
} 
