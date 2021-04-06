#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

void fillArray(int arr[], int n);

int main() {
	int n;
	int arr[100];
	printf("Enter size > 0: ");
	scanf("%d", &n);
	int count = 0;
	if(n > 0) {
		fillArray(arr, n);
		int i;
		for(i = 0; i < n; i++) {
			if(arr[i] % 2 == 0) {
				count = -1;
			}
		}
		if(count == 0) {
			printf("Day la mang le");
		}
		else {
			printf("Day khong la mang le");
		}
		
	}
}
void fillArray(int arr[], int n){
	int i;
	for(i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

