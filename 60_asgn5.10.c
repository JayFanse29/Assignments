#include<stdio.h>
void main()
{
int x,y,i;
printf("Enter the value of x and y: ");
scanf("%d %d",&x,&y);
for(i=x+1;i<y;i++)
{
printf("%3d ",i);
}
}
