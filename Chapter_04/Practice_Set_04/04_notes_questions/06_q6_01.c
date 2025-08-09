#include<stdio.h>

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);
    int sum = 0;
    for (int i=1;i<=num;i++)
    sum += i;
    {
        printf("Sum = %d\n",sum);  // Print final sum
        return 0;
    }
}