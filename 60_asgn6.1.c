#include<stdio.h>

void main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},max,min,i;

max=a[0];
min=a[0];

for(i=0;i<10;i++)
{
if(max<a[i])
{
max=a[i];
}
if(min>a[i])
{
min=a[i];
}
}
printf("Minimum number = %d",min);
printf("\nMaximum number = %d\n",max);
}
