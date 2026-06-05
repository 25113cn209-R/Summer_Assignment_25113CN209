#include <stdio.h>
int main()
{
    int n,a=0,b=1,sum,i;
    printf("Enter number of terms in series-");
    scanf("%d",&n);
   if(n==1){
    printf("nth term is %d",a);
   }
   else if (n==2)
   {
    printf("nth term is %d",b);
   }
   else{

   
    for(i=3;i<=n;i++)
    {
        
    
        sum=a+b;
        a=b;
        b=sum;
    }
    printf("nth term is %d",b);}
    return 0;
    
}