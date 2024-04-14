#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100
#define MAX_USERNAME_LEN 50
#define MAX_PASSWORD_LEN 50

struct account {
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];
};

int menu();
void login();
void registerUser();
int checkCredentials(char *username, char *password);
void writeToFile(struct account *acct);

int main() {
  int option;
  do {
    option = menu();
    switch (option) {
      case 1:
        login();
        break;
      case 2:
        registerUser();
        break;
      case 0:
        printf("Exiting...\n");
        break;
      default:
        printf("Invalid option\n");
        break;
    }
  } while (option != 0);
  return 0;
}

int menu() {
  int option;
  printf("\nMenu:\n");
  printf("1. Login\n");
  printf("2. Register\n");
  printf("0. Exit\n");
  printf("Enter an option: ");
  scanf("%d", &option);
  return option;
}

void login() {
  char username[MAX_USERNAME_LEN];
  char password[MAX_PASSWORD_LEN];
  printf("Enter username: ");
  scanf("%s", username);
  printf("Enter password: ");
  scanf("%s", password);
  if (checkCredentials(username, password)) {
    printf("Login successful\n");
  } else {
    printf("Invalid credentials\n");
  }
}

void registerUser() {
  struct account acct;
  char confirmPassword[MAX_PASSWORD_LEN];
  printf("Enter username: ");
  scanf("%s", acct.username);
  printf("Enter password: ");
  scanf("%s", acct.password);
  printf("Confirm password: ");
  scanf("%s", confirmPassword);
  if (strcmp(acct.password, confirmPassword) == 0) {
    writeToFile(&acct);
    printf("Registration successful\n");
  } else {
    printf("Passwords do not match\n");
  }
}

int checkCredentials(char *username, char *password) {
  FILE *fp = fopen("accounts.txt", "r");
  if (fp == NULL) {
    printf("Could not open accounts file\n");
    return 0;
  }
  char fileUsername[MAX_USERNAME_LEN];
  char filePassword[MAX_PASSWORD_LEN];
  while (fscanf(fp, "%s %s", fileUsername, filePassword) != EOF) {
    if (strcmp(username, fileUsername) == 0 && strcmp(password, filePassword) == 0){
      fclose(fp);
      return 1;
    }