#include <stdio.h>
int main()
{
   int n,i,j,counteven=0,countodd=0;
   
   printf("Enter number of elements in array:");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
}

for(j=0;j<n;j++)

{
    if(a[j]%2==0)
      {
        counteven++;
      }
      else
      {
        countodd++;
      }
      }
printf("number of odd  elements are %d",countodd);
printf("\nnumber of even  elements are %d",counteven);
   
   return 0;
}