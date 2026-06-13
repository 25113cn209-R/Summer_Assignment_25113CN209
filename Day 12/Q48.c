#include <stdio.h>
int perfectnum(int n)
{
    int i,sum=0;
    for(i=1;i<n;i++)
    {
      if(n%i==0)
      {
        sum=sum+i;
      }
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
    if(perfectnum(x))
    {
        printf("%d is a perfect number",x);
    }
    else {
        printf("%d is not a perfect number",x);
    }
    return 0;
}