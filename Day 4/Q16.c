
#include <stdio.h>
#include <math.h>

int main()
{
    int rem,digits=0,temp,sum=0,start,end,i;
    printf("Enter starting number=");
    scanf("%d",&start);
    printf("Enter ending number=");
    scanf("%d",&end);
    printf("Armstrong number between %d and %d are\n",start,end);
   for(i=start;i<=end;i++) {
    temp=i;digits=0;sum=0;
    while(temp!=0)
    {
        temp = temp / 10;
        digits++;
    } 
    temp=i;
    while(temp!=0)
    {
       rem=temp%10;
       sum=sum+pow(rem,digits);
       temp=temp/10;
    }
    if(sum==i){
        printf("%d\t",i);
    }

    }
    return 0;
}