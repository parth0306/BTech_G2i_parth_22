#include <stdio.h>
int main() 
{
    int choice, num, i = 1, rem, dec = 0, bin = 0;
    printf("1. Binary to Decimal\n2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    if (choice == 1) 
    {
        printf("Enter binary number: ");
        scanf("%d", &num);
        while (num > 0) 
        {
            rem = num % 10;
            dec = dec + rem * i;
            i = i * 2;
            num = num / 10;
        }
        printf("Decimal = %d", dec);
    }
    else if (choice == 2) {
        printf("Enter decimal number: ");
        scanf("%d", &num);
        while (num > 0) 
        {
            rem = num % 2;
            bin = bin + rem * i;
            i = i * 10;
            num = num / 2;
        }
        printf("Binary = %d", bin);
    }
    return 0;
}
