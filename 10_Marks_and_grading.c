#include <stdio.h>
int main()
{
    float a,b,c,d,e,p;
    printf("Enter the marks obtained in five subjects : ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    p=(a+b+c+d+e)/500*100;
    printf("Percentage :%f \n" ,p);
    if (p>=90 && p<=100)
    printf("Grade A");
    else if (p>=80 && p<=90)
    printf("Grade B");
    else if (p>=60 && p<=80)
    printf("Grade C");
    else printf("Grade D");
    return 0;
}
