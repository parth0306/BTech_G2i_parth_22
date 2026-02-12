
#include <stdio.h>

int main() {
    
    char ch;
    printf("Enter any alphabet =\t");
    scanf("%c",&ch);
    if ( ch=='e' || ch=='a' || ch=='i' || ch=='o' || ch=='u')
    printf("it is a vowel\n");
    else printf("it is a consonent");
    return 0;
}
