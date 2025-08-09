#include<stdio.h>
#include<math.h>
int main() {

    int a = 1, b =2, c = 2;
    int sum = a + b;
    int multiply = a * b;
    int power = pow(b,c);  // if you want to b^c in the a 
    printf ("the sum is: %d\n", sum);
    printf ("the multiplication is: %d\n", multiply);
    printf ("the power of b^c is: %d\n", power);
    printf("Modular Operator...%d",16%23); // Returns the remainder
    // return 0;  // optional as it automatically get added in the modern c compilers
    printf("int + int = int: %d\n",2*2);
    printf("int + float = float: %f\n",2*2.0);
    printf("float + float = float: %f\n",2.0*2.0);
    printf("Division: %f\n",3.0/2);

    return 0;
}