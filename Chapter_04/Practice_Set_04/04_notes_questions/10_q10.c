#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    while (number % 1 == 0 && number % number == 0)
    {
        printf("It is a prime number\n");
    }
    return 0;
}

// a number that can be divided exactly 
// only by itself and 1, for example 7, 17 and 41