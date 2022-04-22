#include<stdio.h>
void main()
{
int m;
printf("Enter marks out of 100:\n");
scanf("%d",&m); 
if(m>=80 && m<=100)
printf("Distinction!\n");
else if(m>=60 && m<80)
printf("First class!\n");
else if(m>=35 && m<60)
printf("Second class!\n");
else if(m>=0 && m<35)
printf("Fail!\n");
else 
printf("Invalid input.\n");
}
