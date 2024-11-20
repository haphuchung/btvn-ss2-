#include <stdio.h>

int main() {
	// khai bao va khoi tao hai bien so nguyen
	int number1 = 4; // bien so nguyen dau tien 
	int number2 = 5; // bien so nguyen thu hai 
	
	// khai bao mot bien de luu ket qua tinh tong 
	int sum = number1 + number2; //tong 
	int difference = number1 - number2; // Hieu 
    int product = number1 * number2;    // tich 
    float quotient = (float)number1 / number2; // thuong
	
	// in ra cac ket qua 
	printf("tong cua %d va % d la: %d/n", number1, number2, sum);
	printf("hieu cua %d va %d la: %d/n", number1, number2, difference);
	printf("tich cua %d va %d la: %d/n", number1, number2, product);
	printf("hieu cua %d va %d la: %d/n", number1, number2, quotient);
	
	return 0; 
}
	
 
