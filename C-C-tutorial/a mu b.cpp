#include <stdio.h>
#include <math.h>

int main() {
	double a, b;
	printf("Nhap vao 2 so a,b: ");
	scanf("%lf%lf", &a, &b);
	printf("Vay ket qua cua %lf mu %lf la: %lf\n", a, b, pow(a,b));
}
