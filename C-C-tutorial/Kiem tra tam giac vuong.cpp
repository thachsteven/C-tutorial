#include<stdio.h>
int main() {
	
	double a;
	double b;
	double c;
	
	printf("Nhap canh a: ");
	scanf("%lf", &a);
	printf("Nhap canh b: ");
	scanf("%lf", &b);
	printf("Nhap canh c: ");
	scanf("%lf", &c);
	
	if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
		printf("3 canh cua tam giac tao thanh tam giac vuong");
	}
	else {
		printf("3 canh cua tam giac khong tao thanh tam giac vuong");
	}
}
