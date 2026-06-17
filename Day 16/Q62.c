#include <stdio.h>
int main()
{
   int n,fmax;
   printf("Enter number of elements in array-");
   scanf("%d",&n);
   int a[n];
   printf("Enter array elements-");
   for(int i=0; i<n ; i++)
   {
    scanf("%d",&a[i]);
   }
   int count_max =1;
   for(int i=0; i<n ;i++)
   { int count=0;
    for(int j=0;j<n;j++)
    {    
        if(a[j]==a[i])
        {
            count++;
        }
    }
        if(count>count_max)
        {
            count_max=count;
            fmax=a[i];
        }
        
   }
     
   printf("maximum frequency element is %d",fmax);

   return 0;
}