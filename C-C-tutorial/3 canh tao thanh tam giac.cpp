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
	
	if(((a + b) > c) && ((a + c) > c) && ((b + c) > a)) {
		printf("\n3 canh do tao thanh tam giac");
	} 
	}
