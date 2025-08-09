# include<stdio.h>

int main() {
    int length;
    printf("Enter length: ");
    scanf ("%d", &length);

    int breadth;
    printf("Enter breadth :");
    scanf("%d",&breadth);

    int area = length * breadth;
    printf("area of rectangle is %d\n: ",area);
    return 0;  // Return 0 exits the program..
}



// area of square

// int main(){
//     int side;
//     printf("Enter side: ");
//     scanf("%d", &side);

//     printf("area is : %d",side*side);
//     return 0;
// }