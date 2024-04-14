#include <stdio.h>

struct person {
   char name[50];
   int age;
   float salary;
};

int main() {
   struct person p1;
   printf("Enter name: ");
   scanf("%s", p1.name);
   printf("Enter age: ");
   scanf("%d", &p1.age);
   printf("Enter salary: ");
   scanf("%f", &p1.salary);

   printf("\nDisplaying information:\n");
   printf("Name: %s\n", p1.name);
   printf("Age: %d\n", p1.age);
   printf("Salary: %.2f\n", p1.salary);

   return 0;
}
