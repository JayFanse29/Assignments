#include<stdio.h>
void main()
{
int i,a,b,m;
printf("Enter two numbers: \n");
scanf("%d %d",&a,&b);

for(i=1;i<=b;i++)
{
m=a*i;
	if(m%b==0)
	{
	break;
	}
}
printf("LCM = %d",m);
 
while(a!=b)
{
if(a>b)
a=a-b;
else
b=b-a;
}
printf("GCD = %d",a);
}




	
	
         
