#include <stdio.h>
#include <string.h>

int main()
{
    char text[] = {'a', 'c', 'b', 'd'};
    int size_text = sizeof(text) / sizeof(text[0]);
    char temp;
    int i, j;

    printf("Stored text: ");

    for ( i = 0; i < size_text; i++)
    {
       printf("%c", text[i]);
    }
    
    printf("\nSorted Text: ");
    for (i = 0; i < size_text; i++)
    {
        for (j = i + 1; j < size_text; j++)
        {
            if (text[i] > text[j])
            {
                temp = text[i];
                text[i] = text[j];
                text[j] = temp;
            }
        }
    }
    for (i = 0; i < size_text; i++)
    {
        printf("%c", text[i]);
    }

    return 0;
}