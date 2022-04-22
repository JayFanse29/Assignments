#include<stdio.h>
void main()
{
int i,x,y,a=0,b=0;

printf("Enter the values of x and y.\n");
scanf("%d %d",&x,&y);

for(i=x+1;i<y;i++)
{
	if(i%2==0)
	{
	a++;
	}
	else
	{
	b++;
	}
}
printf("The number of even numbers is %d\nThe number of odd numbers is %d",a,b);
}  

