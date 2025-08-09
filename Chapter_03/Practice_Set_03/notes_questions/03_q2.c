#include<stdio.h>

int main () {
    float physics,chemistry,mathematics;
    // const int Total_SUBJECTS = 3;
    // const int Max_Marks = 100;

    printf("enter your physics marks(0-100): ");
    scanf("%f",&physics);

    printf("enter your chemistry marks(0-100): ");
    scanf("%f",&chemistry);

    printf("enter your mathematics marks(0-100): ");
    scanf("%f",&mathematics);

    float total = physics + chemistry + mathematics;
    float percentage = total/3;  // 3 subjects

    int pass_physics = physics >=33;
    int pass_chemistry = chemistry >=33;
    int pass_mathematics = mathematics >=33;
    int pass_overall = percentage >=40;

    if (pass_physics && pass_chemistry && pass_mathematics && pass_overall) 
    {
        printf("\nRESULT: PASS\n");
        printf("Total Marks: %.2f/300\n", total);
        printf("Percentage: %.2f%%\n",percentage); //we are using %% to print the percentage symbol
    } else {
        printf("\nRESULT: FAIL\n");
    }
    
    if(!pass_physics){
        printf("- Failed in Physics (%.2f < 33\n)",physics);
    }
    if (!pass_chemistry)
    {
        printf("- Failed in Chemistry (%.2f < 33\n)",chemistry);
    }
    if (!pass_mathematics)
    {
        printf("- Failed in Mathematics (%.2f < 33\n)",mathematics);
    }
    if (!pass_overall)
    {
        printf("- Overall percentage below  40%% (%.2f%%)\n",percentage);
    }
    return 0;    

}
// pass or fail 40% & 33% each subject 
// 3 subject 
// marks input
