#include <stdio.h>
#include <math.h>
#define PI 3.1415926

int main() {
	
	double n;
	printf("Nhap goc de tinh sin: ");
	scanf("%lf", &n);
	double x = PI * n / 180;
	printf("sin(%lf) = %lf\n", n, sin(x));
	return 0;
}
