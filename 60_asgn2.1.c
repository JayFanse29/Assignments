#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter two numbers.\n");
scanf("%d %d",&a,&b);
c=a;
a=b;
printf("The first num after swap is %d\n", a);
b=c;
printf("The second num after swap is %d.\n", b);
}
