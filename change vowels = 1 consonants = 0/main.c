#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 is vowel
// 0 is consonant

int main()
{

    char str[] = "Caraga State University";
    // Excpected output 010101 00101 1010100100
    int i, j, len = 0;

    len = strlen(str);
     printf("String: %s \n", str);
    // Accepting input.
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            str[i] = '1';

        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            str[i] = '0';
    }

    /* for (i = 0; i < len; i++) {
         // Check vowels.
         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')

                 str[i] = '1';
             }
     */
    printf("Output: %s", str);
    return 0;
}