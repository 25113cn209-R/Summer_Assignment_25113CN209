#include <stdio.h>
int main()
{
   int n,i,j,large,small;
   
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
}
large=a[0];
small=a[0];
for(j=0;j<n;j++)

{
    if(a[j]>large)
      {
        large=a[j];
      }
      else if (a[j]<small)
      {
        small=a[j];
      }


    
}
printf("\nsmallest element is %d",small);
printf("\nlargest element is %d",large);
   
   return 0;
}