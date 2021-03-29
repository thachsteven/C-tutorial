#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main() {
	double n;
	printf("Nhap goc de tinh tan: ");
	scanf("%lf", &n);
	double x = PI * n / 180;
	printf("tan(%lf) = %lf", n, tan(x));
	return 0;
	
}

