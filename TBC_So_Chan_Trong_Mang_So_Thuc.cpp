#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int n;
	printf("Enter n > 0: ");
	scanf("%d", &n);
	if(n > 0) {
		int i;
		int f = 1;
		for(i = 1; i <= n; i++) {
			f = f * i;
			
		}
		printf("The factorial of %d = %d", n, f);
	}
	else {
		printf("Please enter n > 0");
	}
}
