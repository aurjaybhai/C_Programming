#include<stdio.h>

int main(){
    // increament operator
    //++i && i++
    // increament operator
    // ++i (pre increament)
    // i++ (post increament)

    // --i (pre decreament)
    // i-- (post decreament)

    int i=1;
    printf("%d \n",i++); // i++ ===> use , then increase
    printf("%d\n", i); //this time it will print the new value bcoz first it used and printed 

    printf("%d\n", ++i); //increase , then use
    printf("%d\n", i);
    return 0;
}