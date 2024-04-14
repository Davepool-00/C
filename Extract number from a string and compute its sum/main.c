#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "f4c3b00k";
    int num[50];
    int len = strlen(str);
    int i, result = 0;
    printf("Numbers: ");
    for (i = 0; i < len; i++)
    {
        if (!(str[i] >= 97 && str[i] <= 122 || str[i] >= 65 && str[i] <= 90))
        {
            printf("%d ", str[i] - 48);
            num[i] = str[i] - 48;
            result += num[i];
        }
    }
    printf("\nSum: %d", result);

 
    return 0;
}