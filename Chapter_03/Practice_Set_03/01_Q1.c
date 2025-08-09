#include<stdio.h>

int main () {
    int marks;
    printf("enter your marks(0-100): ");
    scanf("%d",&marks);
    if(marks>=0 && marks<=30) {
        printf("you are FAIL\n");    
    } else if (marks>30 && marks<=100)
    {
        printf("you are PASS\n");
    }

    else {
        printf("enter a valid input...❌❌❌\n");
    }
    // METHOD 2 using the ternary
    // marks <=30 ? printf("FAIL\n") : printf("PASS\n");
    return 0;
}
