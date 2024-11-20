#include <stdio.h>

int main() {
    // Khai bao va khoi tao hai bien chieu dai va chieu rong
    int length = 10; // Chieu dai hinh chu nhat (don vi: cm)
    int width = 5;   // Chieu rong hinh chu nhat (don vi: cm)

    // Tinh toan chu vi va dien tich
    int perimeter = 2 * (length + width); // Chu vi: P = 2 * (chieu dai + chieu rong)
    int area = length * width;           // Dien tich: A = chieu dai * chieu rong

    // In ra ket qua
    printf("Chieu dai cua hinh chu nhat: %d cm\n", length);
    printf("Chieu rong cua hinh chu nhat: %d cm\n", width);
    printf("Chu vi cua hinh chu nhat: %d cm\n", perimeter);
    printf("Dien tich cua hinh chu nhat: %d cm2\n", area);

    return 0;
}
