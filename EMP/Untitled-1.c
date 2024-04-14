#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 100

struct Emp
{
    int id;
    char name[20];
    float salary;
};

struct Emp employees[MAX_EMPLOYEES];
int userCount = 0;

void addusers()
{
    if (userCount == MAX_EMPLOYEES)
    {
        printf("Error: maximum number of employees reached\n");
        return;
    }

    printf("Enter ID: ");
    scanf("%d", &employees[userCount].id);

    printf("Enter Name: ");
    scanf("%s", employees[userCount].name);

    printf("Enter Salary: ");
    scanf("%f", &employees[userCount].salary);

    userCount++;
}

void deleteEmployee(int id)
{
    int found = 0;
    for (int i = 0; i < userCount; i++)
    {
        if (employees[i].id == id)
        {
            for (int j = i; j < userCount - 1; j++)
            {
                employees[j] = employees[j + 1];
            }
            found = 1;
            userCount--;
            break;
        }
    }

    if (!found)
    {
        printf("Error: employee with ID %d not found\n", id);
    }
}

void searchEmployee(int id)
{
    int found = 0;
    for (int i = 0; i < userCount; i++)
    {
        if (employees[i].id == id)
        {
            printf("ID: %d\n", employees[i].id);
            printf("Name: %s\n", employees[i].name);
            printf("Salary: %.2f\n\n", employees[i].salary);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Error: employee with ID %d not found\n\n", id);
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

    for (int i = 0; i < userCount; i++)
    {
        fprintf(data, "ID: %d\n", employees[i].id);
        fprintf(data, "Name: %s\n", employees[i].name);
        fprintf(data, "Salary: %.2f\n", employees[i].salary);
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
        if (strstr(buffer, "ID:") != NULL)
        {
            sscanf(buffer, "ID: %d\n", &employees[index].id);
        }
        else if (strstr(buffer, "Name:") != NULL)
        {
            sscanf(buffer, "Name: %s\n", employees[index].name);
        }
        else if (strstr(buffer, "Salary:") != NULL)
        {
            sscanf(buffer, "Salary: %f\n", &employees[index].salary);
            index++;
        }
    }

    userCount = index;
    fclose(data);
}

int main()
{
    int choice;
    int id;

    readFromFile();

    while (1)
    {
        printf("1: Add\n");
        printf("2: Delete\n");
        printf("3: Search\n");
        printf("0: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            addusers();
        }
        else if (choice == 2)
        {
            printf("Enter employee ID to delete: ");
            scanf("%d", &id);
            deleteEmployee(id);
        }
        else if (choice == 3)
        {
            printf("Enter employee ID to search: ");
            scanf("%d", &id);
            searchEmployee(id);
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
