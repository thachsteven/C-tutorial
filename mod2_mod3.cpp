#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);
void showArray(int arr[], int n);
int mod2Elements(int arr[], int n);
int mod3Elements(int arr[], int n);


int main() {
	int n;
	int arr[100];
	printf("Enter size > 0: ");
	scanf("%d", &n);
	
	if(n > 0) {
		fillArray(arr, n);
		showArray(arr, n);
		printf("\nCac so chia het cho 2 la: ");
		mod2Elements(arr, n);
		printf("\nCac so chia het cho 3 la: ");
		mod3Elements(arr, n);
		
		
	
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
int mod2Elements(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] % 2 == 0) {
			printf("%d ", arr[i]);
		}
	}
	
}
int mod3Elements(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		if(arr[i] % 3 == 0) {
			printf("%d ", arr[i]);	
		}
	}
	
}



