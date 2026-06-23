#include <stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter any string-");
    fgets(str, sizeof(str), stdin);
     while (str[i] != '\0')
    {
        if(str[i]!=' ')
        { 
        printf("%c",str[i]);
        }
    i++;
}
    return 0;
}