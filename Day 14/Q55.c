#include <stdio.h>
int main()
{
   int n,i,j,large,secondlarge;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   large=a[0];
   {
    for(j=0;j<n;j++)
    {
        if(a[j]>large){
            secondlarge=large;
            large=a[j];
        }
    }
   }
   printf("Second largest element is %d",secondlarge);
   

   
   return 0;
}