#include<stdio.h>
void main()
{
int n,n1,n2,i,s,c,sum1=0,sum2=0;
float a1,a2;

printf("Enter the value of n:\n");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
n1=i*i;
sum1+=n1;

printf("%4d", n1);
}
printf("\n");
for(i=1;i<=n;i++)
{
n2=i*i*i;
sum2+=n2;

printf("%4d",n2);

}
a1=sum1/n;
a2=sum2/n;
printf("\nThe sum of squares of numbers = %d\nThe sum of squares of numbers = %d\n",sum1,sum2);
printf("The average of squares is %f\nThe average of squares is %f\n",a1,a2);
}
