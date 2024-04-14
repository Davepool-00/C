#include <stdio.h>

int main() {

  int number, divisible;
  printf("Enter any number: \n");
  scanf("%d", &number);

  if (number % 2 == 0) {
    printf("The number is even \n");
  } else {
    printf("The number is odd \n");
  }
  if (( number % 5 == 0) && ( number % 11 == 0)){   
    printf("It is divisible by 5 and 11\n");
  }
  
  else if ( number % 5 == 0) {   
    printf("It is divisible by 5\n");
  }
  else if ( number % 11 == 0) {
    printf("It is divisible by 11");
  }
  else {
      printf("It is not divisible by 5 or 11");
  }
  
  

  return 0;
}