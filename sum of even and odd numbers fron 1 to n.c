//wap to print the sum of even and odd numbers fron 1 to n
#include <stdio.h>

int main(){
    int n, i,sumEven = 0, sumOdd = 0;
    printf("Enter a positive integer n : ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input Please enter an integer\n");
    }
    if (n <= 0) {
        printf("Please enter a number greater than 0\n");
    }
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0){
        sumEven += i;
        }
        else {
        sumOdd += i;  
        }}
    printf("Sum of even numbers from 1 to %d: %d\n", n, sumEven);
    printf("Sum of odd numbers from 1 to %d: %d\n", n, sumOdd);
    return 0;
}
