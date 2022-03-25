#include<stdio.h>
void main()
{
float c,f;
printf("Enter the value in farenheit\n");
scanf("%f", &f);
c=(f-32)*5/9;
printf("the temperature in celsius is %f\n", c);
}
