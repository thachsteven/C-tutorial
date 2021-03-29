#include <stdio.h>

int main() {
	
	char name[20];
	int basic, daper;
	float bonper, loandet, salary;
	
	printf("\nEnter the name: ");
	scanf("%s", &name);
	printf("\nEnter the basic: ");
	scanf("%d", &basic);
	printf("\nEnter the daper: ");
	scanf("%d", &daper);
	printf("\nEnter the bonper: ");
	scanf("%f", &bonper);
	printf("\nEnter the loandet: ");
	scanf("%f", &loandet);
	
	
	salary = basic + basic * daper / 100 + bonper * basic / 100 - loandet;
	printf("\nName : %s, basic = %d, salary = %f", name, basic, salary);

}

