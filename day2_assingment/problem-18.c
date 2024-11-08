//find the 2nd smallest digit in a number
#include <stdio.h>
#include <limits.h>

int findSecondSmallestDigit(int num) {
    int digits[10] = {0};  // Array to count occurrences of each digit
    int min1 = INT_MAX, min2 = INT_MAX;

    // Extract digits and store the frequency of each
    while (num > 0) {
        int digit = num % 10;
        digits[digit]++;
        num /= 10;
    }

    // Find the first and second smallest unique digits
    for (int i = 0; i < 10; i++) {
        if (digits[i] > 0) { // If the digit exists in the number
            if (min1 == INT_MAX) {
                min1 = i; // First smallest
            } else if (i > min1 && i < min2) {
                min2 = i; // Second smallest
            }
        }
    }

    return (min2 == INT_MAX) ? -1 : min2; // Return -1 if second smallest doesn't exist
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int result = findSecondSmallestDigit(num);

    if (result == -1) {
        printf("There is no second smallest digit.\n");
    } else {
        printf("The second smallest digit is: %d\n", result);
    }

    return 0;
}


