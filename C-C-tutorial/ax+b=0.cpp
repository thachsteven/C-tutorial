	#include<stdio.h>
	#include<math.h>
	int main() {
		
		float a;
		float b;
		
		printf("Nhap so a: ");
		scanf("%f", &a);
		printf("Nhap so b: ");
		scanf("%f", &b);
		
		float x;
		x = -b/a;
		if(a != 0) {
			printf("phuong trinh co 1 nghiem x = %f\n", x);
		}
		else if(a == 0 && b != 0) {
			printf("phuong trinh vo nghiem");
		}
		else {
			printf("phuong trinh co vo so nghiem");
		}
	}
	
