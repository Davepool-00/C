#include <stdio.h>
#include <string.h>
#define MAX_EMPLOYEES 100
#define MAX_PASSWORD_LENGTH 100

struct Account
{
    char name[20];
    char password[20];
};

struct Account employees[MAX_EMPLOYEES];
int employeeCount = 0;

void addEmployee()
{
    if (employeeCount == MAX_EMPLOYEES)
    {
        printf("Error: maximum number of employees reached\n");
        return;
    }

    printf("Enter Username: ");
    scanf("%s", employees[employeeCount].name);

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

    strcpy(employees[employeeCount].password, password);
    employeeCount++;
}

void searchEmployee(char *name, char *password)
{
    int found = 0;
    for (int i = 0; i < employeeCount; i++)
    {
        if ((strcmp(employees[i].name, name) == 0) && (strcmp(employees[i].password, password) == 0))
        {
            printf("Login Successful\n");
            printf("Welcome %s\n", employees[i].name);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Invalid Credentials\n");
    }
}

void writeToFile()
{
    FILE *data = fopen("test.txt", "w");
    if (data == NULL)
    {
        printf("Error: unable to open file for writing\n");
        return;
    }

    for (int i = 0; i < employeeCount; i++)
    {
        fprintf(data, "Name: %s\n", employees[i].name);
        fprintf(data, "Password: %s\n", employees[i].password);
    }

    fclose(data);
    printf("Data written to file successfully\n");
}

void readFromFile()
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
            sscanf(buffer, "Name: %s\n", employees[index].name);
        }
        else if (strstr(buffer, "Password:") != NULL)
        {
            sscanf(buffer, "Password: %s\n", employees[index].password);
            index++;
        }
    }

    employeeCount = index;
    fclose(data);
}

int main()
{
    int choice;

    readFromFile();

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

            searchEmployee(name, password);
        }
        else if (choice == 2)
        {
            addEmployee();
        }
        else if (choice == 0)
        {
            writeToFile();
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
