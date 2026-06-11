#include <stdio.h>
int main()
{
    int n,i,j,k,l;
    printf("Enter number of rows:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
        printf(" ");

        }
        for(k=0;k<i;k++)
        {
            printf("%c",'A'+k);
        }
        for(l=i;l>=0;l--)
        {
            printf("%c",'A'+l);
        }
        printf("\n");
    }
       return 0;
}