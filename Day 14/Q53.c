#include <stdio.h>
int main()
{
    int n,i,j,search;
    printf("Enter number of elements in array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
}
printf("Enter element to be searched:");
scanf("%d",&search);
for(j=0;j<n;j++)
{
if(a[j]==search){
    printf("Element found at %d position",j+1);
    break;
}

}
return 0;
     
}