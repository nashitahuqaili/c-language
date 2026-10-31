#include <stdio.h> 
int main() {
    float principal, rate, time, interest;

    printf("Enter the Principal amount (P): ");
    scanf("%f", &principal);

    printf("Enter the Rate of interest per annum (R): ");
    scanf("%f", &rate);

    printf("Enter the Time period in years (T): ");
    scanf("%f", &time);

    interest = (principal * rate * time) / 100.0;

    printf("\nThe Simple Interest is: %.2f\n", interest);

    return 0;
}