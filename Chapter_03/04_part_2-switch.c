#include<stdio.h>

int main () {
    char day; //mo-mon;tu-tues;we-wednes;th-thursday;fr-friday;sa-saturday;su-sunday
    printf("enter day(m-S): ");
    scanf("%s", &day);

    switch (day) {
        case 'm' : printf("monday\n");
            break;
        case 't' : printf("tuesday\n");
            break;
        case 'w' : printf("wednesday\n");
            break;
        case 'T' : printf("thursday\n");
            break;
        case 'f' : printf("friday\n");
            break;
        case 's' : printf("saturday\n");
            break;
        case 'S' : printf("sunday\n");
            break;
        default : printf("not a valid input!!\n");
    
    }


}