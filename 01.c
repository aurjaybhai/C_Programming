#include<stdio.h>

int main(){
    int n; // store user input
    int i=0; // counter
    
    printf("Enter a number: ");
    scanf("%d",&n); //corrected with &
    
    // Loop from 0 to n 
    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }

    // using for loop 
    for (int i=0;i<=n;i++)
    {
        printf("%d\n",i);
    }

    return 0;   
}