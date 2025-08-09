#include<stdio.h>

int main () {
    int marks;
    printf("enter your marks: ");
    scanf("%d",&marks);
    if (marks>=0 && marks<30) {
        printf("C Grade\n");

    } else if (marks>=30 && marks<70)
    {
        printf("B Grade\n");
    } else if (marks>=70 && marks<90)
    {
       printf("A Grade\n");
    } else if (marks>=90 && marks<=100)
    {
        printf("A+ Grade\n");
    } else
        {
            printf("please enter a valid input🙁🙁");
        }
    
    return 0;
}

// marks < 30 --> C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A
// 90 <= marks <= 100 is A+

