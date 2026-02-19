/*finding factorial*/
#include <stdio.h>
int main(){
    int n,i,f=1;
    printf("enter some value");
    scanf("%d",&n);
    if (n<0)
    {printf("factorial not defined");
    }
    else 
    {
        for(i=1;i<=n;i++)
        {
            f=f*i;
        }
        printf("factorial = %d",f);
    }


    return 0;
}
