#include<stdio.h>
#include<math.h>
void main()
{
float l,b,d;
printf("Enter the value of length and breadth.\n");
scanf("%f%f",&l,&b);
d=sqrt(l*l + b*b);
printf("the area = %f\n", l*b);
printf("The perimeter = %f\n", 2*(l+b));
printf("The diagonal = %f\n", d);
}
