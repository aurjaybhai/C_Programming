#include <stdio.h>
#include <math.h>

void number(int square); // function define

int main()
{
    int square;
    printf("Enter a number: ");
    scanf("%d", &square);
    number(square); // function call
    // printf("Value is : %d\n",square);
    return 0;
}

void number(int square)
{
    int result = pow(square, 2);       // store pow in result variable
    printf("Square is: %d\n", result); // fixed %d for int
}


/* 
Error Explanation:
The linker can't find the pow() function because you're not linking the math library.
Solution:
Compile with the -lm flag:   
*/

// gcc -o program practice_qs_29.c -lm  // bash