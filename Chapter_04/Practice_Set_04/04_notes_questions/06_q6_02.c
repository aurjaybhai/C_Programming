#include<stdio.h>

int main(){
    int num;
    int i = 1;
    int sum = 0;

    do
    {
        printf("Enter a postive integer: ");
        scanf("%d",&num);
        if (num <= 0);
        {
            printf("Invalid input! Please enter a postive integer.\n");
        }
    } while (num <=0);

    // Calculate sum using do-while loop
    do
    {
        sum += i;
        i++;
    } while (i <= num);

    // Output result
    printf("Sum of first %d natural numbers = %d\n",num,sum);

    return 0;
}