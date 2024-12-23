#include<stdio.h>

int main() {
    int money, month;
    float tt = 0, interestRate;

    printf("Nhap tien: ");
    scanf("%d", &money);

    printf("Nhap thang: ");
    scanf("%d", &month);

    printf("Nhap lai: ");
    scanf("%f", &interestRate);

    for (int i = 1; i <= month; i++) {
        tt += (interestRate / 100) * money; 
        money += (interestRate / 100) * money; 
    }

    printf("Tong so tien lai: %.2f\n", tt);
    printf("Tong so tien nhan duoc: %d\n", money);

    return 0;
}
