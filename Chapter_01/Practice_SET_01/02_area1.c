# include<stdio.h>

int main(){
    // Circle calculation
    double radius;
    printf("Enter circle radius: ");
    scanf("%lf",&radius);

    double circle_area = 3.14*radius*radius;
    printf("the area of circle is:%.2f\n",circle_area);
    
    // Volume of Cylinder  = π x r² x h
    double cylinder_radius, height;
    printf("\nEnter cylinder radius: ");
    scanf("%lf",&cylinder_radius);

    printf("Enter cylinder height: ");
    scanf("%lf",&height);

    double cylinder_volume = 3.14*cylinder_radius*cylinder_radius*height;
    printf("The volume of cylinder is: %.2f\n",cylinder_volume);
    
    
    return 0; // Return 0 exits the program..

}










/*

printf("%f\n", value);     // 3.141593 (default 6 decimals)
printf("%.0f\n", value);   // 3
printf("%.2f\n", value);   // 3.14
printf("%.4f\n", value);   // 3.1416
printf("%.8f\n", value);   // 3.14159265

*/