#include <stdio.h>
int main() {
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	int table;
	int i;
	for(i = 1; i <= 10; i++){
		table = n * i;
		printf("%d x %d = %d\n", n, i, table);
	}
	
}
