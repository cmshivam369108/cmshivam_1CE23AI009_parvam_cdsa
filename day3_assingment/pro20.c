//Accept a number and find count the number of digits in it.

#include <stdio.h>

int main() {
    int num, count = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    num = (num < 0) ? -num : num;

    // Handle the case where the number is 0
    if (num == 0) {
        count = 1;
    } else {
        // Count digits
        while (num > 0) {
            count++;      // Increment the digit count
            num /= 10;    // Remove the last digit
        }
    }

    // Display the result
    printf("The number of digits is: %d\n", count);

    return 0;
}

