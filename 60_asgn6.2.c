#include<stdio.h>
 void main()
 {
 int a[10]={1,2,3,4,5,6,7,8,9},l,i,n,p,j=9;
 
 printf("Enter the number to add.\n");
 scanf("%d",&n);
 printf("Enter the position.\n");
 scanf("%d",&p);
 
 for(i=0;i<10;i++)
 {
if(p==i)
break;
}

i--;

for(l=8;l>=i;l--,j--)
{
a[j]=a[l];
}
a[i]=n;

for(i=0;i<10;i++)
{
printf("%d  ",a[i]);
}
}



 
