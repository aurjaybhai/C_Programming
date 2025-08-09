#include <stdio.h>

void printHW(int count); // function define

int main()
{
    int count;
    printf("how much time you want to print: ");
    scanf("%d",&count);
    printHW(count);  // function call
    return 0;
}

void printHW(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}