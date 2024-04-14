#include <stdio.h>
#include <string.h>
#define size_for_text 100

int main()
{

    FILE *data = fopen("text.txt", "w+");

    if (data == NULL)
    {
        printf("File has not been found and made new file instead");
    }
    else
    {

        char text[size_for_text];
        int size;

        printf("Enter the size: ");
        scanf("%d", &size);

        for (int i = 0; i < size; i++)
        {
            printf("Enter name[%d]: ", i);
            scanf("%s", text);
            fputs(text, data);
            fprintf(data, "\n");
        }
    }
    fclose(data);
    return 0;
}