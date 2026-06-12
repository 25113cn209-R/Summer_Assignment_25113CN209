#include <stdio.h>

int isprime(int n)
{
    int count = 0;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
        }
    }

    if(count == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(isprime(x))
        printf("%d is Prime", x);
    else
        printf("%d is Not Prime", x);

    return 0;
}