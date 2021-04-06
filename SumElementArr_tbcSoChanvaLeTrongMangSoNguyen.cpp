#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);
void showArray(int arr[], int n);
void question1();
void question2();
int sumOfElements(int arr[], int n);
int avgEvenElements(int arr[], int n, int *count);
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

void fillArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		printf("Arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void showArray(int arr[], int n){
	int i;
	printf("The elements in array: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
void question1(){
	int i;
	int n;
	int arr[100];
	printf("Enter a size > 0: ");
	scanf("%d", &n);
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		int sum = sumOfElements(arr, n);
		printf("\nTong cac phan tu trong mang la %d", sum);
	}
	else{
		printf("Please enter size > 0");
	}
}
int sumOfElements(int arr[], int n){
	int i;
	int sum = 0;
	for(i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}
void question2() {
	int n;
	int arr[100];
	printf("Enter a size > 0: ");
	scanf("%d", &n);
	if(n > 0) {
		int count = 0;
		fillArray(arr, n);
		showArray(arr, n);
		int sum = avgEvenElements(arr, n, &count);
		printf("\nTBC cac so chan trong mang la = %f", (float)sum / count);
	}
	else {
		printf("Please enter size > 0");
	}
}
int avgEvenElements(int arr[], int n, int *count){
	int sum = 0;
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) { //Neu le thi if(arr[i] % 2 != 0)
			sum += arr[i];
			(*count)++;
		}
	}
	return sum;
}



