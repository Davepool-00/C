#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    
    char name[10];
    
    printf("Input Name: ");
    scanf("%s",&name);


    char *reversed = strrev(name);
    printf("%s",reversed);
    


    return 0;
}