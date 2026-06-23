#include <stdio.h>
int main(){
    int n,length=0,j=0,palindrome=1;
    printf("Enter maximum length of string-");
    scanf("%d",&n);
    char str[n],str2[n];
    printf("Enter any string-");
    scanf("%s",str);
    while(str[length]!='\0'){
        length++;
    }
    for(int i=length-1;i>=0;i--)
    {
        
            str2[j]=str[i];
            j++;
            
        
    }
    str2[j]='\0';
    for(int i=0;i<length;i++){
    if(str2[i]!=str[i]){
        palindrome=0;
        break;

    }
}
if(palindrome==1)
{
    printf("string is palindrome");

}
else
{
    printf("string is not palindrome");
}

return 0;
}
    