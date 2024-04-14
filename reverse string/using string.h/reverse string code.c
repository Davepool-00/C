
#include <stdio.h>
#include <string.h>

int main(){
    char string[100];

    printf("Enter a string: ");
    gets(string);

   printf("The reverse string is: %s", strrev(string));

   return 0;
}