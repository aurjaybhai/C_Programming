#include<stdio.h>

int main () {
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    if (age>=18) {
        printf("you are adult");
    }

    else if (age > 13 && age < 18)
    {
        printf("you are teeneger");
    }
    else {
        printf ("you are minor");

    }
    return 0;
}