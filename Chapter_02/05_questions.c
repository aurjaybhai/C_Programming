#include<stdio.h>

int main() {
    int a = 5*2-3*2;
    printf("a %d\n",a);
    // return 0;
    int b = 5*2/2*3;
    printf("b %d\n",b);
    ///
    int c = 5*(2/2)*3; //first solve the brackets then associative rule
    printf("c %d\n",c);
    /////
    int d = 5+2/2*3;
    printf("d %d\n",d);

}