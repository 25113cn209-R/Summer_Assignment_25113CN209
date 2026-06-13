#include <stdio.h>
#include <math.h>
int armstrong(int n)
{   int r,sum=0,temp=n,temp2=n;
    int count=0;
    while(temp>0){
        r=temp%10;
        count++;
        temp=temp/10;    }
    while(temp2>0){
        r=temp2%10;
        sum=sum+pow(r,count);
        temp2=temp2/10;
    }
    if(sum==n)
    return 1;
    else 
    return 0;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(armstrong(x))
    {
        printf("%d is a armstrong number ",x);
    }
    else 
    printf("%d is not a armstrong number ",x);
      return 0;
}
    
