#include<stdio.h>

int main(){
    float income;
    float tax = 0;

    //INPUT annual income
    printf("Enter Your annual income(In lakhs): ");
    scanf("%f",&income);

    // Convert to rupees(1 Lakh = 100000)
    income*=100000;

    // Tax calculation logic 
    if (income<=250000)
    { // No tax below 2.5 Lakh
        tax = 0;
    }
    else if (income<=500000)
    { // 5% tax on amount above 2.5 Lakh
        tax = (income - 250000) * 0.05;
    }
    else if (income<=1000000)
    {
        tax = 12500 + (income - 500000) * 0.20;
    }
    else {
        // 5% on 2.5-5.0L + 20% on 5-10L + 30% on amount above 10L
        tax = 12500 + 100000 + (income - 1000000) * 0.30;
    }

    // Output results
    printf("\nTax Calculation Summary:\n");
    printf("Annual Income: %.2f\n", income);
    printf("Income Tax: %.2f\n", tax);
    
    return 0;

}