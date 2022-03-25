#include<stdio.h>
void main()
{
int no,rem,sum=0;
printf("Enter number\n");
scanf("%d",&no);
while(no>0)
{
rem=no%10;
no=no/10;
sum+=rem;
}
printf("The sum of digits = %d",sum);
}
