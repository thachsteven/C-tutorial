#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
	
	float a;
	float b;
	float c;
	
	printf("Nhap so a: ");
	scanf("%f", &a);
	printf("Nhap so b: ");
	scanf("%f", &b);
	printf("Nhap so c: ");
	scanf("%f", &c);
	
	float d;
	d = b * b - 4 * a * c;
	if(d < 0) {
		printf("Phuong trinh khong co nghiem");
	}
	else if(d == 0) {
		printf("Phuong trinh co 1 nghiem kep d = %f\n", - b / 2 * a);
}
	else {
		printf("Phuong trinh co 2 nghiem phan biet = %f %f\n", ((- b + sqrt (d)) / 2 * a, ((- b - sqrt (d)) / 2 * a)));
}
}

