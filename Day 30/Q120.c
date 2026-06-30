//Project name = student record management system//
#include <stdio.h>

int roll[10], marks[10], n;
char name[10][20];

void input()
{
    int i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nRoll: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%d", &marks[i]);
    }
}

void display()
{
    int i;
    printf("\nRoll\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%d\n", roll[i], name[i], marks[i]);
    }
}

int main()
{
    input();
    display();

    return 0;
}