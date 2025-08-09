#include<stdio.h>
#include<math.h>

int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("this is your number %d",a % 2 == 0);
    return 0;
}