#include <stdio.h>
#include <math.h>

int main(){
    double result = pow(2.0, 3.0); // Example usage of pow()
    printf("2 raised to the power 3 is: %f\n", result);
    printf("Note: If you get an 'undefined reference to pow' error, compile with the -lm flag:\n");
    printf("gcc explaination.c -lm\n");
    return 0;
}