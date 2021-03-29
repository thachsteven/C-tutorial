#include <stdio.h>

int main() {
	
	int salary;
	char grade;
	printf("Enter the salary: ");
	scanf("%d", &salary);
	fflush(stdin);
	printf("Enter the grade allowance: ");
	scanf("%c", &grade);
	
	
	switch(grade) {
		case 'a':
		case 'A':
			printf("Total the salary = %d", salary + 300);
			break;
		case 'b':
		case 'B':
			printf("Total the salary = %d", salary + 200);
			break;
		default:
			printf("Total the salary = %d", salary + 100);
			break;
	}
}
