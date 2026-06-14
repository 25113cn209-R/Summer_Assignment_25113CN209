#include <stdio.h>
int main()
{
   int n,i,j;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   for(j=0;j<n;j++)
   {
    printf("%d ",a[j]);

   }
   return 0;
}