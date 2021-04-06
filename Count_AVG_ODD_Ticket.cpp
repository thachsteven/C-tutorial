#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct info {
	char film[20];
	float price;
	int day;
	int month;
	int year;
};


void fillArray(int arr[], int n);
void showArray(int arr[], int n);
int countOddElements(int arr[], int n);
int avgOddElements(int arr[], int n);

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
//dem so le trong mang va tinh tbc cac so le do
void question1() {
	
	int n;
	int arr[100];
	printf("Enter size > 0: ");
	scanf("%d", &n);
	
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		int countOdd = countOddElements(arr, n);
		printf("\nDem cac so le trong mang = %d", countOdd);
		int avgOdd = avgOddElements(arr, n);
		printf("\nTBC cac so le trong mang = %f", (float)avgOdd / countOdd);
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
countOddElements(int arr[], int n) {
	int i;
	int countOdd = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			countOdd++;
		}
	}
	return countOdd;
}

int avgOddElements(int arr[], int n) {
	int i;
	int avgOdd = 0;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 != 0) {
			avgOdd += arr[i];
		}
	}
	return avgOdd;
}

void question2() {
	
	int n;
	int i;
	printf("\nEnter the number of ticket: ");
	scanf("%d", &n);

	struct info ticket[n];
	for(i = 0; i < n ; i++) {
		printf("Enter the number %d ticket: ", i + 1);
		printf("\nFilm: ");
		scanf("%*c%19[^\n]", ticket[i].film);
		printf("\nPrice: ");
		scanf("%f", &ticket[i].price);
		printf("\nDay: ");
		scanf("%d", &ticket[i].day);
		printf("\nMonth: ");
		scanf("%d", &ticket[i].month);
		printf("\nYear: ");
		scanf("%d", &ticket[i].year);
	}
	for(i = 0; i < n ; i++) {
		printf("\nThe ticket %d info ", i + 1);
		printf("\nFilm = %s", ticket[i].film);
		printf("\nPrice = %f", ticket[i].price);
		printf("\nDay : %d/%d/%d\n", ticket[i].day, ticket[i].month, ticket[i].year);
	}
}









