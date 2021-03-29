#include <stdio.h>
#include <math.h>
int main() {
	double x;
	printf("Enter x: ");
	scanf("%lf", &x);
	printf("|x| = %lf\n", fabs(x));
}
