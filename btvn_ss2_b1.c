#include <stdio.h>

int main() {
	// kieu so nguyen (int): dung de luu tru cac so nguyen (khong co phan thap phan)
	int age = 25; // Vi du tuoi cua mot nguoi 
	
	// kieu so thuc (float): dung de luu tru cac so thuc (co phan thap phan) 
	float pi = 3.14; // gia tri gan dung cua so pi 
	
	// kieu so thuc chinh xac cao (double): dung de luu so thuc voi su chinh xac cao hon (15 chu so)
	double largeNumber = 123456.789123; // vi du; mot so thuc lon hon float 
	
	//kieu ky tu (char): dung de luu tru mot ky tu duy nhat (kich thuc 1 byte) 
	char grade = 'A'; // vi du: diem hoc tap cua mot sinh vien
	
	//kieu so nguyen ngan (short): so nguyen nho hon, tiet kiem bo nho
	short temperature = -10; // vi du: nhiet do am trong mua dong 
	
	//kieu so nguyen dai (long) so nguyen lon hon int 
	long population = 123456 // vi du: mot day so tu nhien
	   
	// in ra cac chuoi gia tri de kiem tra 
   printf("age: %d\n", age);
   printf("pi: %f\n", pi);
   printf("large number: %lf\n", largeNumber);
   printf("grade: %c\n", grade);
   printf("temperature: %d°C\n", temperature);
   printf("population: %ld\n", population);

	return 0;    
}
