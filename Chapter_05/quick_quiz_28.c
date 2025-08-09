#include<stdio.h>
#include<string.h>
#include<ctype.h>

void welcome();
void namaste();
void toLowerCase(char str[]); // DOUBT

int main(){
    char input[50]; //char array to store string input

    printf("Are you indian or french: ");
    scanf("%s",input);
    // Convert input to lowercase for case-insensitive comparison
    toLowerCase(input);

    if (strcmp(input, "indian") == 0)
    {
        namaste();  //Call the function directly
    } else if (strcmp(input, "french") == 0)
    {
        welcome();
    } else{
        printf("Please enter a valid input according to instruction\n");
    }

    return 0;
}
void welcome() {
    printf("Bonjour\n");
}

void namaste() {
    printf("Namaste\n");
}

// Function to convert string to lowercase
void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = tolower(str[i]);  // comes from <ctype.h>
    }
}

// functions value le sakta h aur value de sakta h
