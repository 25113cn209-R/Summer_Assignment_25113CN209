#include <stdio.h>
int main()
{
    int m,n,i,j,sum=0;
    printf("Enter rows and columns of matrix A-");
    scanf("%d %d",&m,&n);
    int A[m][n];
    printf("Enter matrix A-");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
    }
    if(m==n){
        printf("sum of diagonal elements is-");
        for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+A[i][j];
            }
        }
    }
    printf("%d",sum);
}
else 
{
    printf("diagonal elements are defined only for square matrices");
}
return 0;
}