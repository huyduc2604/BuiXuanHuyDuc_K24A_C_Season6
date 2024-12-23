#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c; 
    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == 0) {
        printf("He so a phai khac 0. Day khong phai phuong trinh bac 2.\n");
        return 1;
    }

    float delta = b * b - 4 * a * c; 
    printf("Delta = %.2f\n", delta);

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co hai nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep:\n");
        printf("x = %.2f\n", x);
    } else {
        printf("Phuong trinh vo nghiem (khong co nghiem thuc).\n");
    }

    return 0;
}
