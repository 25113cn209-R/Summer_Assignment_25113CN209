#include <stdio.h>
int main()
{
     int  num, reverse = 0, remainder,n;

    printf("Enter a number: ");
    scanf("%d", &num);
     n=num;
    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n/10;
    }
if(reverse==num){
    printf("Entered number is palindrome");

}else{
    printf("Entered number is not palindrome");
} 
return 0;
}