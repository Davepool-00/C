#include <stdio.h>
#include <string.h>

// Function
void rev(char *str1){
    int temp;
    int len = strlen(str1);

    // Loop for reversing
    for(int i = 0;i < len / 2; i++){
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }
}
int main(){
    char str[100];

    printf("Enter String: ");
    gets(str);
    rev(str); // Call function rev
    puts(str);
    return 0;
}