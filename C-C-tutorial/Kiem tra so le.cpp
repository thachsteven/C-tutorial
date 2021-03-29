	#include<stdio.h>
	int main() {
		
		int n;
		printf("Nhap so nguyen n: ");
		scanf("%d", &n);
		
		if(n % 2 == 0) {
			printf("n la so chan \n", n);
		}
		else {
			printf("n la so le \n", n);
		}	
		}
