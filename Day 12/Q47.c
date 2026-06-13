#include <stdio.h>

int fibonacci(int n)
{
    int a = 0, b = 1, c;

    if(n == 0)
        return 0;
    if(n == 1)
        return 1;

    for(int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main()
{
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", fibonacci(i));
    }

    return 0;
}