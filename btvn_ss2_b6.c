#include <stdio.h>

int main() {
    // Khai bao hang so PI va ban kinh
    const float PI = 3.14; // Hang so PI
    float radius = 5.0;    // Ban kinh hinh tron (don vi: cm)

    // Tinh toan chu vi va dien tich hinh tron
    float circumference = 2 * PI * radius; // Chu vi: C = 2 * PI * ban kinh
    float area = PI * radius * radius;     // Dien tich: A = PI * ban kinh^2

    // In ra ket qua
    printf("Ban kinh cua hinh tron: %.2f cm\n", radius);
    printf("Chu vi cua hinh tron: %.2f cm\n", circumference);
    printf("Dien tich cua hinh tron: %.2f cm2\n", area);

    return 0;
}
