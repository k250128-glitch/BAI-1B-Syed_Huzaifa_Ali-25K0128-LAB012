#include <stdio.h>

// Recursive function to calculate digital root
int digitalRoot(int n) {
    if (n < 10) {
        return n;  // base case: single digit
    }

    int sum = 0;
    while (n > 0) {
        sum += n % 10;  // add last digit
        n /= 10;        // remove last digit
    }

    // Recursive call
    return digitalRoot(sum);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = digitalRoot(number);
    printf("Digital root of %d is: %d\n", number, result);

    return 0;
}
