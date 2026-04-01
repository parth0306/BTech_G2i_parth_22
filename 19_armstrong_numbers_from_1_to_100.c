#include <stdio.h>
#include <math.h>
int main() 
{    int num, original, remainder, result, n;
    printf("Armstrong numbers from 1 to 100 are:\n");
    for (num = 1; num <= 100; num++) 
    {   original = num;
        result = 0;
        n = 0;
        int temp = num;
        while (temp != 0)
        {
          temp /= 10;
            n++;
        }
        temp = num;
        while (temp != 0) 
        {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }
        if (result == original) 
        {
            printf("%d ", num);
        }
    }
    return 0;
}
