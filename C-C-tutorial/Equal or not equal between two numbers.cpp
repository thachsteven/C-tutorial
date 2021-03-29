//Calculate the difference between the two values and display equal or not equal with the value entered

#include <stdio.h>
int main() {
	
	int a;
	int b;
	
	printf("Enter the number a: ");
	scanf("%d", &a);
	printf("Enter the number b: ");
	scanf("%d", &b);
	
	int difa = 0;
	int difb = 0;
	if(a > b) {
		difb = a - b;
		if(difb = b) {
			printf("The difference between the two values is equal with b %d - %d = %d", a, b, difb);
		}
	}
	else if(b > a) {
		difa = b - a;
		if(difa = a){
			printf("The difference between the two values is equal with a %d - %d = %d", b, a, difa);
		}
	}
	else {
		printf("The difference between the two values isn't equal");
	}
}


