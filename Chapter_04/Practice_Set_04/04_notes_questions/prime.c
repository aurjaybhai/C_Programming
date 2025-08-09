#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter a Number: ");
    scanf("%d", &n);
    
    for(i = 2; i * i <= n && isPrime; i++)
        if(n % i == 0) isPrime = 0;
    
    printf("%s\n", (n > 1 && isPrime) ? "It is a Prime Number" : "It's Not a Prime");
    return 0;
}