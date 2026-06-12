#include <stdio.h>
int fact(int n)
{
    int i,p=1;
    for(i=1;i<=n;i++)
    {
         p=p*i;
    }
    return p;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Factorial of %d is %d",x,fact(x));
    return 0;
}