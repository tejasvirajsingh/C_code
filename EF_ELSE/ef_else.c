#include <stdio.h>

int main() {
    int num;   // Variable to store the number

    // Ask user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        // This block runs if condition is TRUE
        printf("%d is an Even number.\n", num);
    } else {
        // This block runs if condition is FALSE
        printf("%d is an Odd number.\n", num);
    }

    return 0;  // End of program
}
