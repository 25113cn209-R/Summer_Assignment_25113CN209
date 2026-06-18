#include <stdio.h>

int main()
{
    int a[] = {10,20,30,40};
    int b[] = {30,40,50,60};

    int n1 = 4, n2 = 4;

    printf("Common Elements: ");

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(a[i] == b[j])
            {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}