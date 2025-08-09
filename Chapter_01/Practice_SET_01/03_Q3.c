#include<stdio.h>

int main () {
    float degree;
    printf("Convert celsius to farenheit: ");
    scanf("%f",&degree);
    
    float conv_degree= (degree * 9/5) + 32;
   /* printf ("The Temperature is %f°F: ",conv_degree);*/  
    //if you use "%f" then .000000 so many uneccessary zero so we use next line
    printf ("The Temperature is %.2f°F \n",conv_degree); 
    return 0;
}

// Formula to convert celsius into farenheit

// (0°C × 9/5) + 32 = 32°F

