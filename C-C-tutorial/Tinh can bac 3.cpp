#include <stdio.h>
#include <math.h>
int main() {
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);
	if(x >= 0) {
		printf("Can bat 3 cua %lf la %lf",x, cbrt(x));
	}
	else {
		printf("Error. Please enter the number x >= 0");
	}
}
