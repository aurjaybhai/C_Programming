#include<stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int result = 1;
    for (int i=1;i<=num;i++)
    {
        result = result * i;
        // printf("the factorial is %d\n",result); // it will print after each result
    }
    printf("the factorial is %d\n",result);
    return 0;    
}