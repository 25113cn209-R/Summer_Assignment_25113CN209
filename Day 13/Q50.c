#include <stdio.h>
int main()
{
   int n,i,j,sum=0;
   float avg;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
    printf("%d ",a[i]);


   }
   for(j=1;j<n;j++)
   {
    sum=sum+a[j];
   }
   avg=sum/n;
   printf("\n sum of array is %d ",sum);
   printf("\n average of array is %f",avg);
   return 0;
}