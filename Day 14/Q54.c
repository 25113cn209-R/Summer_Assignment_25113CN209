#include <stdio.h>
int main()
{
    int n,i,j,count,element;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
}
printf("Enter the element whose frequency you want to find:");
scanf("%d",&element);
count=0;
for(j=0;j<n;j++)
{
  
    if(a[j]==element){
        count++;
    }
  }
  printf("frequency of %d is %d",element,count);



return 0;
     
}