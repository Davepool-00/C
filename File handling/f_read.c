#include <stdio.h>
#define data_for_abc 100

int main()
{

    FILE *data;
    data = fopen("text1.txt", "r");
    char abc[data_for_abc];
    char number[100];
        if (data == NULL)
    {
        perror("file opened unsuccessfully");
    }
    else
    {
        printf("file opened successfully \n-------------------------\n\n");

        // fgets reads only one line without while
        while (fgets(abc, 100, data)) // char name , prolly same with the char array , name of FILE )
        // without while syntax
        // read single line using fgets fgets(abc,100, data);
        {
            printf("%s", abc);
        }
    }
    fclose(data);

    return 0;
}