#include<stdio.h>

void main()
{
int i,j,ch,b=1,m=0;

for(i=0;i<5;i++)
{
	for(j=0;j<5;j++)
	{
	printf("*");
	}
printf("\n");
}
printf("\n\n");

for(i=0;i<5;i++)
{
	for(j=0;j<=i;j++)
	{
	printf("*");
	}
printf("\n");
}

printf("\n\n");
ch=65;
for(i=0;i<5;i++)
{
	for(j=i;j<4;j++)
	{
	printf(" ");
	}
	for(j=0;j<=i;j++)
	{
	printf("%c",ch);
	}
printf("\n");
ch++;
}
printf("\n\n");

for(i=4;i>0;i--)
{
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
printf("\n");
}
for(i=0;i<3;i++)
{
	for(j=1;j<=(i+2);j++)
	{
	printf("%d",j);
	}
printf("\n");
}
printf("\n\n");

for(i=1;i<=5;i++)
{
	for(j=1;j<i;j++)
	{
	printf(" ");
	}
	for(j=i;j<=5;j++)
	{
	printf("%d",j);
	}
printf("\n");	
}
printf("\n\n");

for(i=0;i<5;i++)
{
	for(j=0;j<=i;j++)
	{
	printf("%d",b);
	if(b==1)
	b=b-1;
	else
	{
	b=b+1;
	}
	}
m++;
if(m%2==0)
b=1;
else
b=0;
printf("\n");
}
}








































