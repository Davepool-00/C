#include <stdio.h>  
#include <string.h>  
int main(){  
    char ch[50];
        printf("Enter a string: ");
        scanf("%s",&ch);
        printf("\nThe reverse string is: ");
        for(int i = strlen(ch)-1; i>=0;i--){
        printf("%c",ch[i]);
        }
return 0;  
}  