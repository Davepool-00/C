#include <stdio.h>
#include <string.h>
#define MAX_USER 100
#define MAX_PASSWORD_LENGTH 100

struct Account
{
    char name[20];
    char password[20];
};

struct Account users [MAX_USER];
int userCount = 0;

void addusers()
{

    printf("Enter Username: ");
    scanf("%s", users[userCount].name);

    char password[MAX_PASSWORD_LENGTH];
    char passwordConfirm[MAX_PASSWORD_LENGTH];

    printf("Enter Password: ");
    scanf("%s", password);

    printf("Confirm Password: ");
    scanf("%s", passwordConfirm);


    if (strcmp(password, passwordConfirm) != 0)
    {
        printf("Error: passwords do not match\n");
        return;
    }
    else {
        printf("Account registration complete\n");
    }

    strcpy(users[userCount].password, password);
    userCount++;
}

void suser(char *name, char *password)
{
    int found = 0;
    for (int i = 0; i < userCount; i++)
    {
        if ((strcmp(users[i].name, name) == 0) && (strcmp(users[i].password, password) == 0))
        {
            printf("Login Successful\n");
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Invalid Credentials\n");
    }
}

void write()
{
    FILE *data = fopen("test.txt", "w");
    if (data == NULL)
    {
        printf("Error: unable to open file for writing\n");
        return;
    }

    for (int i = 0; i < userCount; i++)
    {
        fprintf(data, "Name: %s\n", users[i].name);
        fprintf(data, "Password: %s\n", users[i].password);
    }

    fclose(data);
    printf("Data written to file successfully\n");
}

void read()
{
    FILE *data = fopen("test.txt", "r");
    if (data == NULL)
    {
        printf("Error: unable to open file for reading\n");
        return;
    }

    char buffer[100];
    int index = 0;
    while (fgets(buffer, 100, data) != NULL)
    {
        if (strstr(buffer, "Name:") != NULL)
        {
            sscanf(buffer, "Name: %s\n", users[index].name);
        }
        else if (strstr(buffer, "Password:") != NULL)
        {
            sscanf(buffer, "Password: %s\n", users[index].password);
            index++;
        }
    }

    userCount = index;
    fclose(data);
}

int main()
{
    int choice;

    read();

    while (1)
    {
        printf("1: Log in\n");
        printf("2: Register\n");
        printf("0: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            char name[20];
            char password[20];
            printf("Enter username: ");
            scanf("%s", name);
            printf("Enter password: ");
            scanf("%s", password);

            suser(name, password);
        }
        else if (choice == 2)
        {
            addusers();
        }
        else if (choice == 0)
        {
            write();
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
