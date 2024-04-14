//Stephane Dave M. Balanghig
#include <stdio.h>
int main() {
    int valueone, valuetwo, quotient, remainder;
    printf("Enter valueone: ");
    scanf("%d", &valueone);
    printf("Enter valuetwo: ");
    scanf("%d", &valuetwo);

    // quotient
    quotient = valueone / valuetwo;

    //remainder
    remainder = valueone % valuetwo;

    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
// Stephane Dave M. Balanghig
