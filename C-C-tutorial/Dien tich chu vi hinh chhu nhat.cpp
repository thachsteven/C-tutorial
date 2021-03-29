//Tinh dien tich va chu vi hinh chu nhat
#include <stdio.h>
#include <conio.h>

int main() {
	
	int chuvi = 0;
	int dientich = 0;
	int r;
	int d;
	printf("Enter the width > 0: ");
	scanf("%d", &r);
	printf("Enter the length > 0: ");
	scanf("%d", &d);
	if(r > 0 & d > 0) {
		chuvi = (d + r) * 2;
		dientich = d * r;
		printf("The value of rectangle area: %d square centimeters and pertimeter: %d centimeters\n", dientich, chuvi);
	}
	else {
		printf("Please enter the width and length > 0: ");
}
}
