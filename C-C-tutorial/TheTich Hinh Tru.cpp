//evaluate the volume of a cylinder S = r * r * PI * h

#include <stdio.h>
#include <conio.h>

int main() {
	
	int r;
	float PI = 3.141592;
	int h;
	float s = 0;
	
	printf("Enter r > 0: ");
	scanf("%d", &r);
	printf("Enter h > 0: ");
	scanf("%d", &h);
	
	if(r > 0 && h > 0) {
		s = r * r * PI * h;
		printf("The volume of cylinder = %f cm3", s);
		
	}
	else {
		printf("Please enter r, h > 0");
	}
	
}

