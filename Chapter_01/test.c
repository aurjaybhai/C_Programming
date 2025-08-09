/* This code is copied from the ai chatbot so it's
test code ok */


#include<stdio.h>

// Function declaration
int calculate();  

int main() {
    int result = calculate();  // Calling the function
    printf("The answer is: %d\n", result);
    return 0;
}

// Function definition
int calculate() {
    return 42;
}