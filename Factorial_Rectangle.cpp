#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct info{
	float width;
	float height;
	char color[15];
};

void question1();
void question2();
int main() {
	int otp;
		printf("\n\t    *****     *****");
		printf("\n\t  ********   *******");
		printf("\n\t  ********* *********");
		printf("\n\t  *******************");
		printf("\n\t  *******************");
		printf("\n\t   *****************");
		printf("\n\t    ***************");
		printf("\n\t     *************");
		printf("\n\t      ***********");
		printf("\n\t       *********");
		printf("\n\t        *******");
		printf("\n\t         *****");
		printf("\n\t          ***");
		printf("\n\t           *");
		printf("\n");
		printf("\n       HAVE   A\t GOOD\t Day!");
		printf("\n");
		printf("\n     BEST    WISHES\t FOR\t YOU\t");
		printf("\n");
		printf("\n*********************************");
		printf("\n* Selecting appropriate action: *");
		printf("\n* 1. Question 1 		*");
		printf("\n* 2. Question 2 		*");
		printf("\n* 3. Quit program		*");
		printf("\n*********************************");

		printf("\nEnter an option: ");
		scanf("%d", &otp);

		switch(otp) {
			case 1:
				question1();
				break;
			case 2:
				question2();
				break;
			case 3:
				printf("\nGoodbye. See you later. Have a good day!\n");
				exit(0);
				break;
			default:
				printf("Please try again\n");
}
}
void question1(){ //tinh so factorial
	int n;
	int f = 1;
	printf("Enter a number: ");
	scanf("%d", &n);
	int i;
	if(n > 0) {
		for(i = 1; i <= n; i++) {
			f = f * i;
		}
	}
	printf("The factorial of %d = %d", n, f);
}

void question2() {
	float side = 0;
	float area = 0;
	int n, i;
	int arr[100];
	printf("Enter the number rectangle > 0: ");
	scanf("%d", &n);
	
	struct info rectangle[n];
	for(i = 0; i < n; i++) {
		printf("\nNhap thong tin cua hinh chu nhat thu %d: ", i + 1);
		printf("\nWidth: ");
		scanf("%f", &rectangle[i].width);
		printf("\nHeight: ");
		scanf("%f", &rectangle[i].height);
		printf("\nColor: ");
		scanf("%*c%14[^\n]", rectangle[i].color);
			
	}
	for(i = 0; i < n; i++) {
		printf("\nThong tin hinh chu nhat %d", i + 1);
		printf("\nWidth = %.2f", rectangle[i].width);
		printf("\nHeight = %.2f", rectangle[i].height);
		printf("\nColor = %s\n", rectangle[i].color);
	}
	printf("\n>>> List of Square");
	for(i = 0; i < n; i++) {
		if(rectangle[i].width == rectangle[i].height) {
			side = rectangle[i].height;
			area = rectangle[i].height * rectangle[i].width;
			printf("\nHinh vuong %d , side = %f , area = %f , color = %s", i + 1, side, area, rectangle[i].color);
		}
		else continue;
	}
}








