#include<stdio.h>

void main()
{
int a[10]={1,2,3,4,5,6,7,8,9,10},i,p;

printf("Enter the position to delete.\n");
scanf("%d",&p);

for(i=1;i<=10;i++)
{
if(i==p)
break;
}

for(i=p-1;i<9;i++)
{
a[i]=a[i+1];
}

for(i=0;i<9;i++)
{
printf("%d  ",a[i]);
}
}
