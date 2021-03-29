#include <stdio.h>

int main() {
	while(true) {
		int n;
		printf("Enter n from 1 to 10: ");
		scanf("%d", &n);
		
		if(n >= 1 && n <= 10) {
			int f = 1;
			int i;
			for(i = 1; i <= n ; i++) {
				f = f * i;
			}
			printf("The factorial of %d = %d", n, f);
		}
		else {
			printf("Please enter n from 1 to 10 ");
		}
	char conti = 'y';
	printf("\nContinue (Y/N)");
	fflush(stdin);
	scanf("%c", &conti);
	if(conti != 'y' && conti != 'Y') {
		printf("GoodBye !!! See you later");
		break;
	}	
	}
	
}
