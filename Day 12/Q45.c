#include <stdio.h>
int palindrome(int n)
{  int rem,rev=0,temp=n;
    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(rev==n)
    return 1;
    else 
    return 0;
}
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    if(palindrome(x))
    {
        printf("%d is a palindrome number",x);

    }
    else 
    {
        printf("%d is not a palindrome number",x);
    }
    return 0;
}