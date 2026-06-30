#include <stdio.h>

int main()
{
    int id[5], salary[5], n, i;
    char name[5][20];

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter ID: ");
        scanf("%d", &id[i]);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Salary: ");
        scanf("%d", &salary[i]);
    }

    printf("\nEmployee Records\n");
    printf("ID\tName\tSalary\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", id[i], name[i], salary[i]);
    }

    return 0;
}