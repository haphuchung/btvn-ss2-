#include <stdio.h>

int main() {
    //khai bao va khoi tao bien canh cua hinh vuong
    int side = 5; // Canh cua hinh vuong 

    // Tinh chu vi va dien tich
    int perimeter = 4 * side;      // Chu vi hinh vuong: P = 4 * canh
    int area = side * side;        // Dien tich hinh vuong: A = canh^2

    // In ra k?t qu?
    printf("Canh cua hinh vuong: %d cm\n", side);
    printf("Chu vi cua hinh vuong: %d cm\n", perimeter);
    printf("Dien tich cua hinh vuong: %d cm²\n", area);

    return 0;
}
