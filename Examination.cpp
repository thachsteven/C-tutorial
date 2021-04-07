#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct info{
	char shortname[30];
	char longname[30];
	int population;
};

int songuyento (int n);
void R2();
void R3();




int main() {
	int otp;
		printf("\n*********************************");
		printf("\n* Selecting appropriate action: *");
		printf("\n* 1. R2 		        *");
		printf("\n* 2. R3 	         	*");
		printf("\n* 3. Quit program		*");
		printf("\n*********************************");

		printf("\nEnter an option: ");
		scanf("%d", &otp);

		switch(otp) {
			case 1:
				R2();
				break;
			case 2:
				R3();
				break;
			case 3:
				exit(0);
				break;
			default:
				printf("Please try again\n");
}
}

void R2() {
	
	int n1, n2;
	printf("Nhap n1 < n2, n1 >= 2: ");
	scanf("%d%d", &n1, &n2);
	if(n1 >= 2 && n2 > n1) {
		int i;
		for(i = n1; i <= n2; i++) {
			if(songuyento(i)) {
				printf("%d ", i);
			}
		}
}
}
int songuyento (int n) { 
		if(n < 2) {
		return 0;
		}
		int i;
		for(i = 2; i <= sqrt(n); i++) {
			if(n % i == 0) {
			return 0;
		}
		}
		return 1;
	
}




void R3() {
	
	int n;
	int arr[100];
	printf("Enter the number of cities: ");
	scanf("%d", &n);
	
	struct info cities[n], temp;
	int i, j;
	printf("\nPlease enter the data for");
	for(i = 0; i < n; i++) {
		printf("\nCity no: %d", i + 1);
		printf("\nShort name: ");
		scanf("%*c%29[^\n]", cities[i].shortname);
		printf("\nLong name: ");
		scanf("%*c%29[^\n]", cities[i].longname);
		printf("\nPopulation(thousand): ");
		scanf("%d", &cities[i].population);
	}
	for (i = 0; i < n ; i++) {
		printf("\nCity no: %d", i + 1);
		printf("\nShort name: %s", cities[i].shortname);
		printf("\nLong name: %s", cities[i].longname);
		printf("\nPopulation(thousand): %d", cities[i].population);
	}
	for(i = 0; i < n; i++) {
		
		for(j = i + 1; j < n; j++) {
			if(cities[i].population < cities[j].population) {
				info temp = cities[i];
				cities[i] = cities[j];
				cities[j] = temp;
			}
		}
	
		printf("\nTHE MOST POPULOUS CITY: %s", cities[i].longname);
		break;
	}
}






















//char shortname[30];
//	char longname[30];
//	int population;

//Luon luon phai cai dat while hoac neu co yeu cau thi cai them continue. luon nho phai co [n] va [i],  cai dat dieu kien if n theo yeu cau de bai va else
//cai them  ------------------------ cho dep , de nhin. de y cac %d %f %c %s, neu la char thi ko co &.
//su dung switch thi luon luon nho phai co break va default
//Neu struct co cac dieu kien < hay > 1 gia tri nao do, in cac gia tri do tren 1 dong se dep hon

