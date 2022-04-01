#include<stdio.h>
void main()
{
int a,b;
char o;

printf("Enter two numbers and an operator.\n");
scanf("%d %c %d",&a,&o,&b);
float z=a/b;
if(o=='+')
{
printf("Answer = %d",a+b);
}
else if(o=='-')
printf("Anser = %d",a-b);
else if(o=='*')
printf("Answer = %d",a*b);
else if(o=='/')
{
printf("Answer = %f",z);
}
}
