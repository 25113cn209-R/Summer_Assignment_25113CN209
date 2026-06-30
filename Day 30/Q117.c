#include <stdio.h>

int main()
{
    int roll[5], i, n;
    char name[5][20];

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Roll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);
    }

    printf("\nStudent Records\n");
    for(i = 0; i < n; i++)
        printf("%d\t%s\n", roll[i], name[i]);

    return 0;
}