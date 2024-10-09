#include <stdio.h>

int main() {
    int number;
    int i;
    int prime_number = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 1) {
        printf("%d is not a prime number.\n", number);
    } else {
        for (i = 2; i <= number / 2; i++) {
            if (number % i == 0) {
                prime_number = 0;
                break;
            }
        }

        if (prime_number) {
            printf("%d is a prime number.\n", number);
        } else {
            printf("%d is not a prime number.\n", number);
        }
    }

    return 0;
}