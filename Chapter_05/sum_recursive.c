#include <stdio.h>
// #include <stdlib.h>
// #include <math.h>

int natural(int number); // Function declaration

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = natural(number); // Call the recursive function
    printf("Sum of first %d natural numbers = %d\n", number, result);
    return 0;
}

int natural(int number)
{
    // base case: sum of 0 natural numbers is 0
    if (number == 0)
    {
        return 0;
    }
    // recursive case: current number + sum of (number-1) natural numbers
    else
    {
        return number + natural(number - 1);
    }
}