#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);
void showArray(int arr[], int n);
int divXnumber(int arr[], int n);

int main() {
	int n;
	int arr[100];
	printf("Enter size > 0: ");
	scanf("%d", &n);
	
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		divXnumber(arr, n);
		
	}
	else {
		printf("Please enter size > 0");
	}
}
int divXnumber(int arr[], int n) {
	int i;
	int x;
	printf("\nEnter x >=2 va x <= 5: ");
	scanf("%d", &x);
	if(x >= 2 && x <= 5 ){
		
		printf("Cac so chia het cho X la: ");
		for(i = 0; i < n; i++) {
			if(arr[i] % x == 0) {
				printf("%d ", arr[i]);
			}
		}
	}
	else{
		printf("Error!!! Please enter x >=2 va x <= 5");
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


