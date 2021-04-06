#include <stdio.h>
#include <conio.h>
int gcd(int a, int b);
int lcm(int a, int b);
int main () {
	int a, b;
	printf("Enter a: ");
	scanf("%d", &a);
	printf("Enter b: ");
	scanf("%d", &b);
	if (a > 0 && b >0) {
		int ucln = gcd(a, b);
		int bcnn = lcm(a, b);
		printf("\nUoc chung lon nhat la: %d\n", ucln);
		printf("Boi chung nho nhat la: %d\n", bcnn);
	}
	else {
		printf("Vui long nhap so a,b > 0 ");
	}
	return 0;
getch();
}
//Tim uoc chung lon nhat voi dieu kien :a # b ==> 1. a > b thi` a -= b, 2. a < b thi b -= a
int gcd(int a, int b) { //greatest common divisor
	while (a != b) {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	return a;
}
//Tim boi chung nho nhat voi cong thuc : a * b / ucln
int lcm(int a, int b) { //least common multiple
	return (a * b) / gcd(a, b); 
}
