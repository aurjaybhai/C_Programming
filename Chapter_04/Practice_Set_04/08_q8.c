#include<stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("\nMultiplication Table for %d:\n",number);
    for(int i=10;i>=1;i--){
        printf("%d x %d = %d\n",number,i,number*i);
    }

    return 0;
}