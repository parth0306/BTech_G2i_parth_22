/*Converting Days into Year month and remaining days left format*/
#include <stdio.h>

int main() {
    
    int d,m,y,r;
    printf("Enter number of days =\t");
    scanf("%d",&d);
    y = d / 365;
    m = d / 30;
    r = d % 365;
    printf("years=%d\n",y);
    printf("months=%d\n",m);
    printf("days=%d\n",r);
    return 0;
}
