#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int i = 1;
    int result = 1;

    while (i <= num)
    {
        result = result * i;
        i++; // added increament statement
    }
    printf("Factorial of %d is %d\n",num,result);
    return 0;
}