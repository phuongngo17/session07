#include <stdio.h>

// Ham kiem tra so nguyen to
int isPrime(int n) {
    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Ham kiem tra so hoan hao
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum += i;
        }
    }

    return (sum == n);
}

// Ham tinh giai thua
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}

// Ham in so dao nguoc
void reverseNumber(int n) {
    int reverse = 0;

    while (n != 0) {
        int remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }

    printf("So dao nguoc: %d\n", reverse);
}

int main() {
    int choice, n;
    int sumSequence = 0;
    int countDivisibleBy3 = 0;
    int sumFactors = 0;

    printf("Nhap mot so nguyen n: ");
    scanf("%d", &n);
    do{

       printf("INTEGER NUMBER\n");
       printf("1. In ra day so co gia tri nho hon hoac bang n va tinh tong.\n");
       printf("2. In ra va dem cac so chia het cho 3 nho hon n.\n");
       printf("3. Kiem tra so nguyen co phai la so nguyen to khong.\n");
       printf("4. Kiem tra so nguyen co phai la so hoan hao khong.\n");
       printf("5. Tinh tong cac uoc so cua n.\n");
       printf("6. Tinh giai thua n.\n");
       printf("7. In ra so dao nguoc cua n.\n");
       printf("8. In ra cac so nguyen to tu 1 den n.\n");
       printf("9. Thoat.\n");
       printf("Lua chon cua ban: ");
       scanf("%d", &choice);
        switch (choice) {
            case 1: {
                printf("Day so: ");
                for (int i = 1; i <= n; i++) {
                    printf("%d ", i);
                    sumSequence += i;
                }
                printf("\nTong: %d\n", sumSequence);
                break;
            }
            case 2: {
                printf("Cac so chia het cho 3: ");
                for (int i = 1; i < n; i++) {
                    if (i % 3 == 0) {
                        printf("%d ", i);
                        countDivisibleBy3++;
                    }
                }
                printf("\nSo luong: %d\n", countDivisibleBy3);
                break;
            }
            case 3: {
                if (isPrime(n)) {
                    printf("%d la so nguyen to.\n", n);
                } else {
                    printf("%d khong phai la so nguyen to.\n", n);
                }
                break;
            }
            case 4: {
                if (isPerfect(n)) {
                    printf("%d la so hoan hao.\n", n);
                } else {
                    printf("%d khong phai la so hoan hao.\n", n);
                }
                break;
            }
            case 5: {
                printf("Cac uoc so cua %d: ", n);
                for (int i = 1; i <= n / 2; i++) {
                    if (n % i == 0) {
                        printf("%d ", i);
                        sumFactors += i;
                    }
                }
                printf("%d ", n);
                sumFactors += n;
                printf("\nTong cac uoc so: %d\n", sumFactors);
                break;
            }
            case 6: {
                int fact = factorial(n);
                printf("%d! = %d\n", n, fact);
                break;
            }
            case 7: {
                reverseNumber(n);
                break;
            }
            case 8: {
                printf("Cac so nguyen to tu 1 den %d: ", n);
                for (int i = 2; i <= n; i++) {
                    if (isPrime(i)) {
                        printf("%d ", i);
                    }
                }
                printf("\n");
                break;
            }
            case 9: {
                printf("Ket thuc chuong trinh.\n");
                return 0;
            }
            default: {
                printf("Lua chon khong hop le\n");
                break;
            }
        }
    }while(choice != 9);
    return 0;
}

