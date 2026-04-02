// Program to tell whether a year is a leap year or not.
#include <stdio.h>

int main() 
{
    int a;
    printf("enter year:");
    scanf("%d",&a);
    if((a%4==a && a%100 !=0)||(a%400==0))
    {printf("\n This is a leap year");}
    else printf("\n This is not a leap year");
    return 0;
}
