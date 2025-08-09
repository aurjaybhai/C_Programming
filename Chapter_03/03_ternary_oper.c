#include<stdio.h>


int main () {
    int age;
    printf("enter your age: ");
    scanf("%d",&age);

    // Ternary
    // Condition ? doSomething if TRUE:doSomething if FALSE; 
    age>=18 ? printf("you are adult\n") : printf("minor\n");

    return 0;

}