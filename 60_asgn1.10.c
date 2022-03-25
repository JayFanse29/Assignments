#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,x1,x2;
printf("enter the co-efficient of x^2, x and constant.\n");
scanf("%f %f %f",&a,&b,&c);
x1=(-b+sqrt(b*b-4*a*c))/2*a;
x2=(-b-sqrt(b*b-4*a*c))/2*a;
printf("The solution is %f and %f.\n", x1,x2);
}
