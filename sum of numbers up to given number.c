//WAP a program to print the sum of all numbers up to a given number
#include <stdio.h>
int main(){
    int n,sum=0,i;
    printf("enter some positive values");
    scanf("%d",&n);
    switch (n > 0)
    {
        case 1:for(i=1;i<=n;i++){
            sum = sum +i;
        }
        printf("sum of numbers from 1 to %d = %d",n,sum);
        break;
        case 0: printf("please enter a positive number");
        break;
        

    }
    return 0;
}
