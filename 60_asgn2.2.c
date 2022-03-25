#include<stdio.h>
void main()
{
int a,b;
printf("Enter the value of two numbers.\n");
scanf("%d %d", &a,&b);
b=a+b;
a=b-a;
printf("The value of first number after swap is %d.\n",a);
b=b-a;
printf("The value of second number after swap is %d.\n", b);
}
