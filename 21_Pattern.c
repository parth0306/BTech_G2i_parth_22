#include <stdio.h>
int main() 
{
    int n, i, j, k;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n - i - 1; j++) 
        {printf("  ");}
        int num = 1;
        for(k = 0; k <= i; k++) 
        {
            printf("%4d", num);
            num = num * (i - k) / (k + 1);
        }
        printf("\n");
    }
    return 0;
}
