#include <stdio.h>
int main()
{
    int m,n,i,j;
    printf("Enter rows and columns of matrix A-");
    scanf("%d %d",&m,&n);
    int A[m][n],C[n][m];
    printf("Enter matrix A-");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }
    
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            C[j][i]=A[i][j];
            
        }
    
        
    }
    printf("Transpose of matrix A is given by-\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",C[i][j]);
        }printf("\n");
    }
    return 0;
}