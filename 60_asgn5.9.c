#include<stdio.h>

void main()
{
int n,i,m=0;
printf("ENTER THE NUMBER: ");
scanf("%d",&n);
for(i=2;i<n;i++)
{
	if(n%i==0)
	{
	m=1;
	}
}

if(m==0)
{
printf("%d IS A PRIME NUMBER.\n",n);
}
else
printf("%d IS NOT A PRIME NUMBER.\n",n);
}  
	
