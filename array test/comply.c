#include <stdio.h>
#include <string.h>

int main()
{

    char text[] = "Caraga State University";
    int text_length = 0;
    text_length = sizeof(text) / sizeof(text[0]);
    int i, j = 0;
    char temp[text_length];

    for (i = 0; i < text_length; i++)
    {
        //* or use if (strchr("aeiouAEIOU", text[i]) == NULL) for shorter code

        if (text[i] != 'a' && text[i] != 'e' && text[i] != 'i' && text[i] != 'o' && text[i] != 'u' &&
            text[i] != 'A' && text[i] != 'E' && text[i] != 'I' && text[i] != 'O' && text[i] != 'U')
        {
            temp[j] = text[i];
            j++;
        }
    }
    temp[j] = '\0'; 
    printf("%s", temp);
    return 0;
}