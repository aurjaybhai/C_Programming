#include<stdio.h>

int main() {
    float a , b , c , d;
    float max;

    // Input four numbers 
    printf("Enter first number: ");
    scanf("%f",&a);

    printf("Enter second number: ");
    scanf("%f",&b);

    printf("Enter third number: ");
    scanf("%f",&c);

    printf("Enter fourth number: ");
    scanf("%f",&d);

    // Find the greatest number 
    max = a; // Assume first number is largest

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }
    
    // Output result 
    printf("The greatest number is: %.2f\n",max);

    return 0;

}