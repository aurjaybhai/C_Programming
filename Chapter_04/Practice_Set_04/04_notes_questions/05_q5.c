#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int i = 1;
    int sum = 0;  // Initialize sum to 0

    while (i <= num) // Loop while i <= num
    {
        sum += i;  // Add current i to sum
        i++;      // Increament i
    }
    
    printf("Sum = %d\n",sum); // Print final sum
    return 0;
}

// 💡 Pro Tip:
// sum = num * (num + 1) / 2;
// Formula explanation: Sum = n(n+1)/2