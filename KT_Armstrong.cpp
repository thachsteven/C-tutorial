#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

//B1: Dem so luong chu so
//B2: Tinh tong cac luu thua: cow soos la cac chu so, so mu la so luong chu so
//B3: So sanh va ket luan


//Dem so luong chu so n
//vd 1023 co 4 chu so. lay n chia cho 10 de dem so chu so

/*KT so armstrong
n = 1023
=> 1^4 + 0^4 + 2^4 + 3^4 so sanh voi 1023
	1023 % 10 = 3
    1023 / 10 = 102
*/ 
int main() {
	int num, result=0, remain;
	int cnt=0, div;
	printf("Enter a num: ");
	scanf("%d", &num);
	div = num;
	while(div != 0){
		div = div/10;
		cnt++;
	}
	div = num;
	while(div != 0){
		remain = div%10;
		div = div/10;
		result += pow(remain, cnt);
	}
	if(result == num){
		printf("\n%d is Amstrong number", num);
	}
	else{
		printf("\n%d isn't Amstrong number", num);
	}
}
