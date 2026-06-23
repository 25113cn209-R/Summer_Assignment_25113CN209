#include <stdio.h>
int main(){
    char str[100],find;
    int i=0,count=0;
    printf("Enter any string-");
    fgets(str, sizeof(str), stdin);
    printf("Enter character whose frequency we have to find-");
    scanf("%c", &find);
     while (str[i] != '\0')
     {
         if(str[i]==find){
            count++;
         }
         i++;
     }
     printf("frequency of %c is %d",find,count);
     return 0;
}