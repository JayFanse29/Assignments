#include<stdio.h>
void main()
{
int n,i,s1=0,s2=0;
float a1,a2;
printf("Enter the value of n\n");
scanf("%d",&n);
printf("Even numbers:");
for(i=1;i/2<=n;i++)
{
if(i%2==0)
{
printf("%3d",i);
s1+=i;
}
}
a1=s1/((i/2)-1);
printf("\nOdd numbers:");

for(i=1;i/2<n;i++)
{
if(i%2!=0)
{
printf("%3d",i);
s2+=i;
}
}
a2=s2/(i/2);
printf("\n\nThe sum of first n even numbers is %d\nThe average of first n even numbers is %f\n",s1,a1);
printf("\n\nThe sum of first n odd numbers is %d\nThe average of first n odd numbers is %f\n",s2,a2);


}
  
