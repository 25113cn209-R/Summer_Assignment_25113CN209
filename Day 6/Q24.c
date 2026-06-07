#include <stdio.h>
int main()
{
    int x,n,p=1,i;
    printf("Enter a number or base-");
    scanf("%d",&x);
    printf("Enter power-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=p*x;
    }
    printf("%d^%d is %d",x,n,p);
    return 0;

}