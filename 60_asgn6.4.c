#include<stdio.h>

void main()
{
int a[10]={1,4,2,3,8,5,6,12,11,15},i,j,t;
/* for(i=0;i<10;i++)
{
printf("Enter number %d: ",i+1);
scanf("%d", &a[i]);
}  */

for(i=9;i>0;i++)
{
	for(j=0;j<i;j++)
	{
	
	if(a[j]>a[j+1])
	{
	t=a[j];
	a[j]=a[j+1];
	a[j+1]=t;
	}
	}
}
for(i=0;i<10;i++)
{
printf("%d  ",a[i]);
}



}
