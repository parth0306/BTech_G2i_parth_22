#include <stdio.h>
int main() 
{
    int n,a[100] , i, sum = 0;
    printf("Enter the number of elements: ");
    scanf("%d", &n); 
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) 
    {scanf("%d", &a[i]);}
    for(i = 0; i < n; i++) 
    {sum += a[i];}
    printf("Sum of elements = %d\n", sum);
    return 0;
}
