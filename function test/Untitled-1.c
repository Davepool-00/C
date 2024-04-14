#include <stdio.h>

char text(char name, int age_number, char gender)
{
    printf("Hello %c, Age: %d Gender: %c", name, age_number, gender);
}
int main()
{
    char name, gender;
    int age_number;

    printf("Enter name: ");
    scanf("%c", &name);

    fflush(stdin);

    printf("Enter age: ");
    scanf("%d", &age_number);

    fflush(stdin);

    printf("Enter gender: ");
    scanf("%c", &gender);

    fflush(stdin);

    text(name, age_number, gender);
    return 0;
}