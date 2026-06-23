#include <stdio.h>
int main(){
    char str[100];
    int i=0,count=0;
    printf("Enter any string-");
    fgets(str, sizeof(str), stdin);
     while (str[i] != '\0')
    {
        if (str[i] != ' ' && str[i] != '\n' &&
            (i == 0 || str[i - 1] == ' ')) {
            count++;
        }
        i++;
    }
    printf("Number of words in sentence is=%d",count);
    return 0;
}