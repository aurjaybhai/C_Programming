    #include<stdio.h>

int main () {
    int day; //1-mon;2-tues;3-wednes;4-thursday;5-friday;6-saturday;7-sunday
    printf("enter day(1-7): ");
    scanf("%d", &day);

    switch (day) {
        case 1 : printf("monday\n");
            break;
        case 2 : printf("tuesday\n");
            break;
        case 3 : printf("wednesday\n");
            break;
        case 4 : printf("thursday\n");
            break;
        case 5 : printf("friday\n");
            break;
        case 6 : printf("saturday\n");
            break;
        case 7 : printf("sunday\n");
            break;
        
        default : printf("not a valid input!!");
    
        return 0;

            
    }
  


}