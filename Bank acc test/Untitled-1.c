#include <stdio.h>
#include <string.h>
#define MAX_Account 100
#define MAX_Password_Length 100
#define MAX_Balance 99999

struct Account
{
    char name[20];
    char password[20];
    float balance;
};

struct Account employees[MAX_Account];
int AccCount = 0;

void writeToFile()
{
    FILE *data = fopen("test.txt", "w");
    if (data == NULL)
    {
        printf("Error: unable to open file for writing\n");
        return;
    }

    for (int i = 0; i < AccCount; i++)
    {
        fprintf(data, "Name: %s\n", employees[i].name);
        fprintf(data, "Password: %s\n", employees[i].password);
        fprintf(data, "Balance: %2.f\n", employees[i].balance);
    }

    fclose(data);
}

void addEmployee()
{
    if (AccCount == MAX_Account)
    {
        printf("Error: maximum number of employees reached\n");
        return;
    }

    printf("Enter Username: ");
    scanf("%s", employees[AccCount].name);

    char password[MAX_Password_Length];
    char passwordConfirm[MAX_Password_Length];

    printf("Enter Password: ");
    scanf("%s", password);

    printf("Confirm Password: ");
    scanf("%s", passwordConfirm);

    if (strcmp(password, passwordConfirm) != 0)
    {
        printf("Error: passwords do not match\n");
        return;
    }
    else
    {
        printf("Account registration complete\n");
    }

    strcpy(employees[AccCount].password, password);
    AccCount++;

    void addbalance();
}

void searchEmployee(char *name, char *password)
{
    int found = 0;
    for (int i = 0; i < AccCount; i++)
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
        printf("Invalid Credentials\n\n");
    }
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

    AccCount = index;
    fclose(data);
}

void addbalance () {
    if (AccCount == MAX_Balance){
        printf("Balance too large, cannot add more");
    }

    printf("Enter Balance to Add: ");
    scanf("%f",employees[AccCount].balance);
    printf("Total Balance: %2.f", employees[AccCount].balance);
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
            writeToFile();
            addbalance();
        }
        else if (choice == 2)
        {
            addEmployee();
            writeToFile();
        }
        else if (choice == 0)
        {
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }

    return 0;
}
