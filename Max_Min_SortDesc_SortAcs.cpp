#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);
void showArray(int arr[], int n);
int minOfElement(int arr[], int n);
int maxOfElement(int arr[], int n);
int sortDesc(int arr[], int n);
int sortAsc(int arr[], int n);

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
void question1(){
	int n;
	printf("Enter size > 0: ");
	scanf("%d", &n);
	int arr[100];
	if(n > 0) {
		fillArray(arr, n);
		printf("\nCac phan tu trong mang: ");
		showArray(arr, n);
		int min = minOfElement(arr, n);
		int max = maxOfElement(arr, n);
		printf("\nMin = %d. Max = %d", min, max);
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
//	printf("The elements in array: ");
	for(i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}

int minOfElement(int arr[], int n){
	int i;
	int min;
	min = arr[0];
	for(i = 0; i < n; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}
int maxOfElement(int arr[], int n){
	int i;
	int max;
	max = arr[0];
	for(i = 0; i < n; i++) {
		if(arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void question2(){
	int n;
	printf("Enter size > 0: ");
	scanf("%d", &n);
	int arr[100];
	if(n > 0) {
		fillArray(arr, n);
		printf("\nCac phan tu trong mang: ");
		showArray(arr, n);
		printf("\nSap xep giam dan: ");
		sortDesc(arr, n);
		showArray(arr, n);
		printf("\nSap xep tang dan: ");
		sortAsc(arr, n);
		showArray(arr, n);
	}
}

int sortDesc(int arr[], int n){
	int i, j;
	void swap(int*, int*);
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--) {
			if(arr[j] > arr[j - 1]){
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}
void swap(int*a, int*b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
int sortAsc(int arr[], int n){
	int i, j;
	void swap(int*, int*);
	for(i = 0; i < n - 1; i++) {
		for(j = n - 1; j > i; j--) {
			if(arr[j] < arr[j - 1]){
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}





