#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours_worked, Ot, Gross_pay, Monthly_rate, Dependants, Deductions, Netpay, Weekly_net_play, Deductions_formula;

    Deductions_formula = 0.05;

    printf("Enter Hour: ");
    scanf("%f", &hours_worked);
    Ot = ((hours_worked-40) * (16.78*1.5));
    Gross_pay = ((40*16.78)+ Ot);
    Monthly_rate = 4 * Gross_pay;
    Weekly_net_play = Monthly_rate / 4 ;
    printf("Enter dependents: ");
    scanf("%f", &Dependants);

    if (Dependants >= 3)
        Deductions = 35 + (0.06 * Monthly_rate) + (1.4 * Monthly_rate) + (Deductions_formula);
    else
        Deductions = (0.06 * Monthly_rate) + (1.4 * Monthly_rate) + (Deductions_formula) + 10;

    Netpay = Monthly_rate - Deductions;

    printf("Deductions: %.3f\n", Deductions);
    printf("Weekly net pay: %.3f", Weekly_net_play);



    return 0;
}
