#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Prime number check
    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a divisor
                break;
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
