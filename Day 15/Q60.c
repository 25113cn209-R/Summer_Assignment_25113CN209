#include <stdio.h>
int main()
{
   int n,i,j,count=0;
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements-");
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);

   }
   for(j=0;j<n;j++)
   {
    if(a[j]!=0)
{
printf("%d ",a[j]);
}
else{
    count++;
}

   }
   for(i=0;i<count;i++)
{
    printf("0 ");
}
   return 0;
}