#include<stdio.h>
void main()
{
int x,y,z,c;
printf("Enter the values of x,y and z.\n");
scanf("%d %d %d",&x,&y,&z);
c=x;
x=y;
y=z;
z=c;
printf("The value of x after rotation is %d\nThe value of y after rotation is %d.\nThe value of z after rotation is %d.\n", x,y,z);
}
