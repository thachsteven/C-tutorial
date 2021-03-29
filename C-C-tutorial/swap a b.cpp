//viet ham trao doi gia tri 2 so nguyen. ham tra ve voin
#include <stdio.h>

void swap(int* a, int* b) {
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main() {
	int a, b;
	printf("Nhap 2 so a,b: ");
	scanf("%d%d", &a, &b);
	
	printf("Truoc khi trao doi, a = %d, b = %d\n", a, b);
	
	swap(&a, &b);
	printf("Sau khi trao doi, a = %d, b = %d\n", a, b);
}	
	
