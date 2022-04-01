#include<stdio.h>
void main()
{
int x=7,y=9,z;
z=x++ + ++y - x-- + --y;
printf("z = %d\n",z);



int m=5,n=2;
int l;
l=(m++ * n++ / ++m - --n % m++);
printf("l = %d\n",l);
}
