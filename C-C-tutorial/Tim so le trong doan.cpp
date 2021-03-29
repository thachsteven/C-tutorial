#include <stdio.h>

int main() {
	int num1;
	int num2;
	
	printf("Enter num1: ");
	scanf("%d", &num1);
	printf("Enter num2: ");
	scanf("%d", &num2);
	
	int i;
	if(num1 < num2) {
		for(i = num1; i <= num2; i++) {
			if(i % 2 != 0) {
				printf("%d ", i);
			}
		}
	}
	else {
		for(i = num2; i <= num1; i++) {
			if(i % 2 != 0) {
				printf("%d ",i);
			}
		}
	}
	
}
