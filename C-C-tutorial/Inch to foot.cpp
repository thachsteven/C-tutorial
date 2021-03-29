#include <stdio.h>

int main() {
	
	float c, i, f;
	printf("Enter the centimeters: ");
	scanf("%f", &c);
	
	i = c / 2.54;
	f = i / 12;
	printf("Inchs : %.1f\n", i);
	printf("Foots : %.1f\n", f);
	getch();
	
}
