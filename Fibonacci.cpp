#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
//Fibonacci la so ma so tiep theo la tong 2 so truoc. bat dau la 0 1
int main() {
	int n1 = 0;
	int n2 = 1;
	int n3;
	int n;
	
	printf("Nhap vao 1 phan tu de tim so Fibonacci: ");
	scanf("%d", &n);
	printf("%d %d", n1, n2);
	
	int i;
	for(i = 2; i < n; i++) {
		n3 = n1 + n2;
		printf(" %d", n3);
		n1 = n2;
		n2 = n3;
	}
}
