#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main(){

// char name[100];
char *name[100];

printf("Input string: ");
scanf("%s \n",name);





for (int i = 0; i < strlen(name); i++)
{
    if (i == '\0')
    {
        break;
    }
}

printf("After rellocation: ");
printf("%s",*name);







    return 0;
}