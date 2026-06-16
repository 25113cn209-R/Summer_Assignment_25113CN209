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
   printf("Enter number of left rotations-");
   scanf("%d",&k);
   
   for(l=k;l<n;l++)
   {
         printf("%d ",a[l]);
   }
   for(j=0;j<k;j++)
   {
     
      printf("%d ",a[j]);
   }
   return 0;
}