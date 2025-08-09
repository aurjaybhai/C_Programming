#include<stdio.h>

int main(){
    int num;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\nCalculate sum of %d's table (1-10):\n",num);
    for (int i = 1;i <= 10; i++)
    {
        int term = num * i;
        sum += term;

        // Optional: Show progress
        printf("%d × %2d = %3d → Cumulative sum: %d\n", num, i, term, sum);
    }

    // Step 3: Print final result
    printf("\nFinal sum of %d's multiplication table: %d\n", num, sum);
    
    return 0;

}