#include <stdio.h>
#include <math.h>
int main() {
	double x;
	printf("Enter x to calculate log: ");
	scanf("%lf", &x);
	printf("log(%lf) = %lf\n", x, log(x));
}
