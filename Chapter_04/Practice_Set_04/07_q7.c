#include<stdio.h>

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    int factorial = 1;
    for (int i=1; i<=n; i++) {
        factorial = factorial * i;
    }
    printf("Final Factorial is %d\n",factorial);

    return 0;
}