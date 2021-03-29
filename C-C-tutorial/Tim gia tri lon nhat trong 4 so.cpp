#include <stdio.h>

void findmax(float a, float b, float c, float d, float*max) {
	*max = a;
	*max = (b > *max) ? b : *max;
	*max = (c > *max) ? c : *max;
	*max = (d > *max) ? d : *max;
}

int main() {
	float a, b, c, d;
	printf("Enter four numbers: ");
	scanf("%f%f%f%f", &a, &b, &c, &d);
	float max;
	findmax(a, b, c, d, &max);
	printf("Gia tri lon nhat trong 4 so thuc %f,%f,%f,%f la %f", a, b, c, d, max);
}
