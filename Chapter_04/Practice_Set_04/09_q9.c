#include<stdio.h>

int main(){
    int sum=0;
    for (int i=5;i<=50;i++)
    {
        sum += i;
        // printf("%d\n",sum += i); // this prints the backened calculation of this 
    }
    printf("sum is %d\n",sum);
    return 0;
    
}