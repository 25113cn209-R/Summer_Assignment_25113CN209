
#include <stdio.h>
#include <math.h>

int main()
{
    int n,rem,digits=0,temp,sum=0;
    printf("Enter a number=");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        temp = temp / 10;
        digits++;
    } 
    temp=n;
    while(temp!=0)
    {
       rem=temp%10;
       sum=sum+pow(rem,digits);
       temp=temp/10;
    }
    if(sum==n){
        printf("Entered number is armstrong");
    }
    else{
        printf("Entered number is not armstrong");
    }
    return 0;
}