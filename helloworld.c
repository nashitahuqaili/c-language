#include<stdio.h>

int main() {
    //variables
    int roll_no;
    char grade;
    float percentage;
     //1. Roll Number input
     printf("Enter your roll number:");
     scanf("%d", &roll_no);
     //grade
     printf("Enter grade:");
     scanf(" %c", &grade);
     //percentage
     printf("Enter percentage:");
     scanf("%f", &percentage);
    return 0;
}
