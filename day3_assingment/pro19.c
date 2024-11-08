#include <stdio.h>

int main() {
    int num, sum = 0;

    // Get input from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers by converting to positive
    num = (num < 0) ? -num : num;

    // Loop to extract and sum the digits
    while (num > 0) {
        sum += num % 10;  // Add the last digit to sum
        num /= 10;         // Remove the last digit
    }

    // Display the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}