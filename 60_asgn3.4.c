#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter 3 numbers.\n");
scanf("%d %d %d",&a,&b,&c);

if(a>b)
{
	if(a>c)
	{
	printf("%d is maximum.\n",a);	
	}
	else
	printf("%d is maximum.\n",c);
}
else if(b>c)
{
printf("%d is maximum.\n",b);
}
else
printf("%d is maximum.\n",c);
}
