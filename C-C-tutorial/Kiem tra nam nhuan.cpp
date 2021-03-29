#include <stdio.h>
#include <conio.h>
int main () {
	
	int year;
	printf("Enter an year: ");
	scanf("%d", &year);
	
	
	if (year % 4 == 0 && year % 100 == 0) {
		printf("This year %d is leap year\n", year);
		
	}
	else {
		printf("This is %d isn't leap year\n", year);
	} 
	printf("Finished\n");
	getch();
	
}
