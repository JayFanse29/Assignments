#include<stdio.h>
#include<string.h>
void main()
{
int i;
float f;
char ch;
long l;
double ld;
printf("Size of int is %ld\nSize of float is %ld\nSize of char is %ld\n",sizeof(i),sizeof(f),sizeof(ch));
printf("Size of long is %ld\nSize of long double is %ld\n",sizeof(l),sizeof(ld));
}
