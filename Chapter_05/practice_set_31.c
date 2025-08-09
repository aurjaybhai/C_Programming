#include <stdio.h>
#include <math.h>

float squareArea(float side);
float rectangleArea(float length,float breadth);
float circleArea(float radius);


int main()
{
    float side;
    printf("Enter a side: ");
    scanf("%f",&side);
    printf("The area of square is: %f\n",squareArea(side));
    
    float length,breadth;
    printf("Enter length:");
    scanf("%f",&length);
    printf("Enter breadth:");
    scanf("%f",&breadth);
    // scanf("%f  %f",&length,&breadth); 
    printf("The area of rectangle is: %f\n",rectangleArea(length,breadth));

    float radius;
    printf("Enter an radius: ");
    scanf("%f",&radius);
    printf("The area of circle is: %f",circleArea(radius));
    return 0;
}

float squareArea(float side){
    return side*side;
}

float rectangleArea(float length,float breadth){
    return length*breadth;
}

float circleArea(float radius){
    return 3.14*radius*radius;
}