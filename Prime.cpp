#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	
	int n;
	printf("Enter n > 0: ");
	scanf("%d", &n);
	
	if(n < 2) {
		printf("The number %d isn't prime", n);
		return 0;
	}
	int i;
	int count = 0;
	for(i = 2; i <= sqrt(n); i++) {
		if(n % i == 0) {
			count++;
		}
	}
	if(count == 0) {
		printf("The number %d is prime", n);
	}
	else {
		printf("The number %d isn't prime", n);
	}
}
