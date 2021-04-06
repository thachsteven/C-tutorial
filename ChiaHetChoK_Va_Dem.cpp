#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int k;
	int count = 0;
	printf("Enter k number: ");
	scanf("%d", &k);
	int i;
	for(i = 1; i <= k; i++) {
		if(k % i == 0) {
			if(i % 2 == 0) {
				count++;
			}
			printf("%d ", i);
		}
	}
	printf("\nNumber of even divisors: %d", count);
}
