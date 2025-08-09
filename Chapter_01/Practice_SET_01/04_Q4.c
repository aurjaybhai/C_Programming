#include<stdio.h>

// simple interest ---> (principal*rate_of_interest*time)

int main() {
    // Use double for decimal values (like 7.5% interest)
    double principal, rate, years;
    
    // Clear input prompts with newlines
    printf("Enter principal amount: ");
    scanf("%lf", &principal);  // use %lf for double

    printf("Enter interest rate (%%):");
    scanf("%lf",&rate);

    printf("Enter number of years: ");
    scanf("%lf", &years);

    // Calculate simple interest 
    double simple_interest = (principal * rate * years) / 100;

    printf("\nThe simple interest is ₹%.21f\n", simple_interest);
    return 0;
}






















// int main() {
//     printf("amount of principal");
//     printf("at what rate of interest");
//     printf("for how many years");
//     int principal,rate,years;
//     scanf("%d",principal,rate,years);
//     int simple_interest = (principal * rate * years)/100;
//     printf("The value of simple interest is %d: ",simple_interest);
//     return 0;

// }