#include<stdio.h>
void main()
{
int y;
printf("Enter the year.");
scanf("%d",&y);
if(y%4==0)
{
	if(y%100==0)
	{
	
		if(y%400==0)
		{
		printf("The given year is leap year.\n");
		
		}
		else printf("The given year is not a leap year.\n");
		
	}
	 else printf("The given year is leap year.\n");
}
else printf("The given year is not a leap year.\n");
}
