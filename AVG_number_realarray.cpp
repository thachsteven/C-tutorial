#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(float arr[], int n);
void showArray(float arr[], int n);
float avgRealnumber(float arr[], int n, int*count);
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
//			case 2:
//				question2();
//				break;
			case 3:
				printf("\nGoodbye. See you later. Have a good day!\n");
				exit(0);
				break;
			default:
				printf("Please try again\n");
}
}

void fillArray(float arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", &arr[i]);
	}
}
void showArray(float arr[], int n){
	int i;
	printf("The elements in array: ");
	for(i = 0; i < n; i++) {
		printf("%f", arr[i]);
	}
}
void question1(){
	int n;
	float arr[100];
	printf("Enter size > 0 ");
	scanf("%d", &n);
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		int count = 0;
		float sum = 0;
		sum = avgRealnumber(arr, n, &count);
		printf("\nTBC cac so trong mang so thuc: %f", sum / count);
	}
	else{
		printf("Please enter > 0");
	}
}
float avgRealnumber(float arr[], int n, int*count){
	float sum = 0;
	int i;
	for(i = 0; i < n; i++) {
			sum += arr[i];
			(*count)++;
	
	}
	return sum;
	
}










