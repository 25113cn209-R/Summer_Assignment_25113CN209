#include <stdio.h>
int main()
{
   int n,i,j;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements-");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   printf("Reversed array-\n");
   for(j=n-1;j>=0;j--)
   {
    printf("%d ",a[j]);

   }
   return 0;
}
