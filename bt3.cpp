#include <stdio.h>

int main() {
    float deposit, annual,  monthsSent, moneyReceived;
    float interest;

    printf("Nhap so tien gui ban dau: ");
    scanf("%f", &deposit);

    printf("Nhap lai suat nam: ");
    scanf("%f", &annual);

    printf("Nhap so thang gui: ");
    scanf("%f", &monthsSent);

    interest = (deposit * annual * monthsSent) / 12 / 100;
    printf("\nThang\tTien gui\tTien lai\n");
    for (int i = 1; i <= monthsSent; i++) {
        printf("%d\t%.2f\t\t%.2f\n", i, deposit, interest);
        deposit += interest;
    }

    printf("Tien nhan duoc sau thoi gian gui: %.2f\n", moneyReceived);

}

