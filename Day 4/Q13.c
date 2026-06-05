#include <stdio.h>
int main()
{
    int n,a=0,b=1,sum,i;
    printf("Enter number of terms in series-");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        printf("%d\t",a);
        sum=a+b;
        a=b;
        b=sum;
    }
    return 0;
    
}