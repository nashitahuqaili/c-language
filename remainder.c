#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf(" Sum of Digits ===\n");
    printf("Enter an integer: ");
    scanf("%d", &num);

    int temp = num;
 
    if (temp < 0) {
        temp = -temp;
    }

    while (temp != 0) {
        remainder = temp % 10; 
        sum += remainder;     
        temp /= 10;         
    }

    printf("The sum of digits of %d is: %d\n\n", num, sum);

    return 0;
}