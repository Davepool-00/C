#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{

    char text[] = {"C4r4g4 St4t3 Un1V3rs1ty"};
    int length = strlen(text);
    int i, j;
    char temp;

    for (i = 0; i < length; i++)
    {

        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))

            text[i] = '\0';
    }

    printf("%s", text);
    return 0;
}