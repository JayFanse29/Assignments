#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter three numbers.\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{

printf("%d is maximum.\n",a);
		
		if(b>c)
		{
		printf("%d is minimum.\n",c);
		}
		
		else
		{
		printf("%d is minimum.\n",b);
		} 
	}

else if(b>c && b>a)
{


printf("%d is maximum.\n",b);

	if(a>c)
	{
	printf("%d is minimum.\n",c);
	}
	
	else
	printf("%d is minimum.\n",a);
}
else 
{
printf("%d is maximum.\n",c);

	if(a>b)
	printf("%d is minimum.\n",b);
	else
	printf("%d is minimum.\n",a);
}	
}
