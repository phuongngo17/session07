#include <stdio.h>
int main() {
    int i;
    for (i = 1; i <= 100; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n",i);
        }
        else if (i % 3 == 0) {
            printf("Fizz\n",i);
        }
        else if (i % 5 == 0) {
            printf("Buzz\n",i);
        }
        else {
            printf("%d\n", i);
        }
    }
}

