#include<stdio.h>
#include<math.h>
// a - question
int main (){
    // int a = 8^8; // it's a valid statement
    // printf("%d",a); //output is zero(same_number) bcoz of bitwise XOR
// b = question
    // int x; int y = x; // output is valid

// c = question
    // int x,y=x;    //invalid statement 


// d = question
    // char stars = '**'; //error throws as in character only single character allowed
    
                      // true or false questions
// A - question
    int isSunday = 1; //this is true
    int isSnowing = 1; //this is true
    printf("%d\n", isSunday && isSnowing);
   
    
// B - question
    int itisMonday = 0;
    int itisraining = 1;
    printf("%d\n", itisMonday || itisraining);
    
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    printf("%d\n", x>9 && x<100);
    return 0;
}

// 9 < x < 100 

