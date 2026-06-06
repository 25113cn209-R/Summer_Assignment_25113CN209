#include <stdio.h>
int main()
{
    int n,i,sum=0,temp;
    printf("Enter a number-");
    scanf("%d",&n);
    temp=n;
    for(i=1;i<n;i++)
    {
        if(temp%i==0){
            sum=sum+i;
        }
    }
     if(sum==n){
        printf("Entered number is a perfect number");
     }
     else {
        printf("Entered number is not a perfect number");
     }
     return 0;
}