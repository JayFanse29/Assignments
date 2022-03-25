#include<stdio.h>
#include<math.h>
void main()
{
float x1,x2,y1,y2,x,y,d;
printf("Enter first coordinates.\n");
scanf("%f %f", &x1,&y1);
printf("Enter second coordinates.\n");
scanf("%f %f", &x2,&y2);
x=(x2-x1)*(x2-x1);
y=(y2-y1)*(y2-y1);
d=sqrt(x+y);
printf("The distance = %f.\n", d);
}

