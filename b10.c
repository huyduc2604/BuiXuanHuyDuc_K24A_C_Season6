#include <stdio.h>
#include <math.h> 

int main() {
    int n, isPrime = 1; 
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d khong phai la so nguyen to.\n", n);
    } else {
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0; 
                break;
            }
        }
        if (isPrime) {
            printf("%d la so nguyen to.\n", n);
        } else {
            printf("%d khong phai la so nguyen to.\n", n);
        }
    }

    return 0;
}
