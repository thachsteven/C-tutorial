//Write a program that accepts two numbers a and b and checks whether or not a is divisible by b.

#include <stdio.h>
int main() {
	
	int a;
	int b;
	
	printf("Enter the number a: ");
	scanf("%d", &a);
	printf("Enter the number b: ");
	scanf("%d", &b);
	

	if(a % b == 0) {
		printf("\na is divisible by b");
	}
	else {
		printf("\na isn't divisible by b");
	}
}
