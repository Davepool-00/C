#include <stdio.h>


    int factorial(int n){ //!! This is a direct recursion

        if (n == 1)
        {
            return 1; //?? always use return 1 
        }
        else
        {
           return n * factorial( n - 1);
        }
        
    }


int main(){

    int n;

    printf("Enter number: ");
    scanf("%d",&n);
    printf("Factorial of %d is %d", n, factorial(n)); //?? A factorial is multiplying a numbber -1 to the number for example before 2 is 1 so 2! is 2 X 1 
    return 0; 
}