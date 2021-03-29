#include <stdio.h>
int main() {
	
	int n;
	int t1 = 0;
	int t2 = 1;
	int nextnumber; 
	printf("Enter the number : ");
	scanf("%d", &n);
	
	printf("The fibonacci: ");
	int i;
	for(i = 1; i <= n ; i++) {
		printf("%d ", t1);
	
	nextnumber = t1 + t2;
	t1 = t2;
	t2 = nextnumber;
	
	}
	
}
