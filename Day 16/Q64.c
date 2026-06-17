#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n], b[n];
    int m = 0;

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        int found = 0;

        for(int j = 0; j < m; j++)
        {
            if(a[i] == b[j])
            {
                found = 1;
                break;
            }
        }

        if(found == 0)
        {
            b[m] = a[i];
            m++;
        }
    }

    printf("Array after removing duplicates:\n");

    for(int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }

    return 0;
}