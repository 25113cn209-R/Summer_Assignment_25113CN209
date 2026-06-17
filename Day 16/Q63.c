#include <stdio.h>
int main()
{
   int n,sum;
   printf("Enter number of elements in array-");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements-");
   for(int i=0; i<n ; i++)
   {
    scanf("%d",&a[i]);
   }
   printf("Enter sum-");
   scanf("%d",&sum);
   for(int i=0;i<n;i++)
   {
    for(int j=i+1;j<n;j++)
    {
       if(a[i]+a[j]==sum)
       printf("pair found %d and %d\n",a[i],a[j]);
    }

   }
   return 0;
}