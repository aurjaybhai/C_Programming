#include <stdio.h>

void printTable(int n); // function define

int main()
{
    int n;
    printf("Enter a number to print its multiplication table:");
    scanf("%d", &n);
    printTable(n); // function call
    return 0;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i * n);
    }
}