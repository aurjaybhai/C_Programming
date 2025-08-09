#include<stdio.h>

void welcome();
void namaste();


int main(){
    char input;
    printf("Are you indian or french : ");
    scanf("%s",&input);
    if (input == "indian")
    {
        printf(namaste);
    } else if (input == "french")
    {
        printf(welcome);
    } else{
        printf("Please enter a valid input according to instruction\n");
    }

    return 0;
}

void welcome(){
    printf("Bonjour");
}

void namaste(){
    printf("Namaste");
}

