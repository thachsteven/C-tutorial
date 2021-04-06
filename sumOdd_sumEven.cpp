#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);
void showArray(int arr[], int n);
void question1();
void question2();
int sumOfEvenElements(int arr[], int n);
int sumOfOddElements(int arr[], int n);
int countEvenElements(int arr[], int n);
int countOddElements(int arr[], int n);
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
void question1() {
	int n;
	int arr[100];
	printf("Enter a size > 0: ");
	scanf("%d", &n);
	
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		int sumEven = sumOfEvenElements(arr, n);
		printf("\nTong cac phan tu chan trong mang = %d", sumEven);
		int sumOdd = sumOfOddElements(arr, n);
		printf("\nTong cac phan tu le trong mang = %d", sumOdd);	
	}
	else {
		printf("Please enter size > 0");
	}
}

void fillArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
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
sumOfEvenElements(int arr[], int n) {
	int i;
	int sumEven = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			sumEven += arr[i];
		}
	}
	return sumEven;
}
int sumOfOddElements(int arr[], int n) {
	int i;
	int sumOdd = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			sumOdd += arr[i];
		}
	}
	return sumOdd;
}

void question2() {
	int n;
	int arr[100];
	printf("Enter a size > 0: ");
	scanf("%d", &n);
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		
		int countEven = countEvenElements(arr, n);
		printf("\nMang co so luong phan tu chan la: %d", countEven);
		
		int countOdd = countOddElements(arr, n);
		printf("\nMang co so luong phan tu le la: %d", countOdd);
	}
}
int countEvenElements(int arr[], int n) {
	int i;
	int countEven = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			countEven++;
		}
	}
	return countEven;
}
int countOddElements(int arr[], int n) {
	int i;
	int countOdd = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			countOdd++;
		}
	}
	return countOdd;
}




