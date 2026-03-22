//Write a program to count the no. of digits in a number(integer).
#include <stdio.h>
int main() 
{
int n,count=0;
printf("Enter a integer number : ");
scanf("%d", &n); 
if (n==0){count=1;}
else if (n<0){n=-n;}
while (n != 0) 
{
   n/=10;
   count++;
}
printf("Number of digits =%d ",count);

 return 0;
}
