#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result;

    printf("Cac so Armstrong co 3 chu so la:\n");
    for (number = 100; number <= 999; number++) {
        originalNumber = number;
        result = 0;

        while (originalNumber != 0) {
            remainder = originalNumber % 10;
            result += pow(remainder, 3);
            originalNumber /= 10;
        }

        if (result == number) {
            printf("%d\n", number);
        }
    }

    return 0;
}

