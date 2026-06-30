#include <stdio.h>

int main()
{
    int books = 10, ch, n;

    do
    {
        printf("\n1. Issue Book\n2. Return Book\n3. View Books\n4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter number of books to issue: ");
                scanf("%d", &n);

                if(n <= books)
                {
                    books -= n;
                    printf("Book issued successfully.\n");
                }
                else
                    printf("Not enough books available.\n");
                break;

            case 2:
                printf("Enter number of books to return: ");
                scanf("%d", &n);

                books += n;
                printf("Book returned successfully.\n");
                break;

            case 3:
                printf("Available Books = %d\n", books);
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(ch != 4);

    return 0;
}