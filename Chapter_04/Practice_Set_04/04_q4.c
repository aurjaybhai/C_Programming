#include<stdio.h>

int main(){
    int num;
    do
    {
        printf("enter a number: ");
        scanf("%d",&num);
        printf("%d\n",num);

        if (num % 7 == 0)
        {
            break;
        }
        
    } while (1);
    printf("%d is the multiple of 7\n",num);
    return 0;
}


// printf("Format %d %f %s", int_var, float_var, string_var); 
//          |    |    |
//          |    |    string_var
//          |    float_var
//          int_var