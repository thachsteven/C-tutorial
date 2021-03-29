#include <stdio.h>

int main() {
	char input;
	printf("Enter the alphabet A, B, C, D, F, B ,V: ");
	scanf("%c", &input);
	
	switch(input) {
		case 'a':
		case 'A':
			printf("Ada");
			break;
		case 'b':
		case 'B':
			printf("Basic");
			break;
		case 'c':
		case 'C':
			printf("Cobol");
			break;
		case 'd':
		case 'D':
			printf("dBase III");
			break;
		case 'f':
		case 'F':
			printf("Fortran");
			break;
		case 'p':
		case 'P':
			printf("Pascal");
			break;
		case 'v':
		case 'V':
			printf("Visual C++");
			break;
		default:
			printf("Please enter the charater A, B, C, D, F, B ,V");
			break;
										
	}

			
	
}
