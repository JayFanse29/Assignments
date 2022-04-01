#include<stdio.h>
void main()
{
char ch;
printf("Enter any character.\n");
scanf("%c",&ch);

if((ch>=65 && ch<=90)||(ch>=97 && ch<=122))
printf("Character is an alphabet.\n");

else if(ch>=48 && ch<=57)
{
printf("Character is a number.\n");
}
else 
printf("Character is a special character.");
}
