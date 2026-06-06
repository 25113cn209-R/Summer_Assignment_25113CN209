#include <stdio.h>
int main()
{
    int n,rem,sum=0,fact=1,i,temp,d;
    printf("Enter a number-");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        d=rem;
        {  fact=1;
for(i=1;i<=d;i++){
    fact=fact*i;
    
}sum=sum+fact;

        } temp=temp/10;

    }
    if(sum==n){
        printf("Entered number is a strong number");
    }
    else {
        printf("Entered number is not a strong number");
    }
    return 0;
}