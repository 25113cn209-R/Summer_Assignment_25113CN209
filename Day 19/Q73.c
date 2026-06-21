#include <stdio.h>
int main()
{
    int m,n,x,y,i,j;
    printf("Enter rows and columns of matrix A-");
    scanf("%d %d",&m,&n);
    printf("Enter rows and columns of matrix B-");
    scanf("%d %d",&x,&y);
    int A[m][n],B[x][y],C[10][10];
    printf("Enter matrix A-");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }
    printf("Enter matrix B-");
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        scanf("%d",&B[i][j]);
    }
    if(m==x&&n==y)
    {   printf("sum of matrices is\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }printf("\n");
    } }
    else 
    {
        printf("addition not possible");
    }
    return 0;


}