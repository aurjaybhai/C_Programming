#include <stdio.h>

void printHello();

int main()
{
    printHello(); // function call
    printHello();
    printHello();
    return 0;
}

// function defination

void printHello()
{
    printf("Hello!\n");
}