#include<stdio.h>

int main(){
    char alpha;
    printf("enter an alphabet(a-z) || (A-Z): ");
    scanf("%c",&alpha);

    if(alpha>='a' && alpha<='z'){
        printf("\n%c is a lower case alphabet\n");
    } else if (alpha>='A' && alpha<='Z')
    {
        printf("\n%c is a upper case alphabet\n");
    } 
    else {
        printf("\nIt's not an english alphabet\n");
    }
    return 0;

}