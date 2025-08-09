#include<stdio.h>

int main(){
    for (int x = 5; x <= 50; x++) {
        if (x % 2 != 0) {  // Directly check for odd numbers
            printf("%d\n", x);
        }
    }
    return 0;
}