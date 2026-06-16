#include <stdio.h>
int main()
{
   int n,i,j,k,l;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements-");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   printf("Enter number of right rotations-");
   scanf("%d",&k);
   for(j=n-k;j<n;j++)
   {
     
      printf("%d ",a[j]);
   }
   
   for(l=0;l<n-k;l++)
   {
         printf("%d ",a[l]);
   }
   
   return 0;
}