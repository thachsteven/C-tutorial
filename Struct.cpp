#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


struct info {
	
	int empID;
	char empName[30];
	float salary;
	float allowance;
	
};

int main() {
	
	int n;
	int arr[100];
	int idnhap;
	int count = 0;
	printf("\nEnter the number of employees: ");
	scanf("%d", &n);
	float totalSalary = 0;
	struct info employees[n], temp;
	int i, j;
	for(i = 0; i < n; i++) {
		printf("\nEnter the infomation of employees number %d", i + 1);
		printf("\nEmpID: ");
		scanf("%d", &employees[i].empID);
		printf("\nEmpName: ");
		scanf("%*c%29[^\n]", employees[i].empName);
		printf("\nSalary: ");
		scanf("%f", &employees[i].salary);
		printf("\nAllowance: ");
		scanf("%f", &employees[i].allowance);
	}
	printf("-----------The information of employees-----------");
	for(i = 0; i < n; i++) {

		printf("\nEmpID: %d", employees[i].empID);
		printf("\nEmpName: %s", employees[i].empName);
		printf("\nSalary: %.2f", employees[i].salary);
		printf("\nAllowance: %.2f", employees[i].allowance);
		float totalSalary = employees[i].salary + employees[i].allowance;
		printf("\nTotal Salary: %f + %f = %f\n", employees[i].salary, employees[i].allowance, totalSalary);
	}
//Sap xep luong theo gia giam dan
//	for(i = 0; i < n; i++) {
//		for(j = i + 1; j < n; j++) {
//			if(employees[i].salary < employees[j].salary){
//				info temp = employees[i];
//				employees[i] = employees[j];
//				employees[j] = temp;
//			}
//			
//		}
//	}
//	printf("\n-----------Thu tu giam dan cua salary-----------");
//	for(i = 0; i < n; i++) {
//		printf("\nEmpID: %d", employees[i].empID);
//		printf("\nEmpName: %s", employees[i].empName);
//		printf("\nSalary: %.2f", employees[i].salary);
//		printf("\nAllowance: %.2f", employees[i].allowance);
//		float totalSalary = employees[i].salary + employees[i].allowance;
//		printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);
//	}
//Sap xeo luong theo gia tang dan
//	for(i = 0; i < n; i++) {
//		for(j = i + 1; j < n; j++) {
//			if(employees[i].salary > employees[j].salary){
//				info temp = employees[i];
//				employees[i] = employees[j];
//				employees[j] = temp;
//			}
//			
//		}
//	}
//	printf("\n-----------Thu tu tang dan cua salary-----------");
//	for(i = 0; i < n; i++) {
//		printf("\nEmpID: %d", employees[i].empID);
//		printf("\nEmpName: %s", employees[i].empName);
//		printf("\nSalary: %.2f", employees[i].salary);
//		printf("\nAllowance: %.2f", employees[i].allowance);
//		float totalSalary = employees[i].salary + employees[i].allowance;
//		printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);	
//}
//Nhap vao ID va hien ra cac thong tin co id do
//	while(true) {
//		count = 0;
//		printf("\nEnter ID to find: ");
//		scanf("%d", &idnhap);
//		for(i = 0; i < n; i++) {
//			if(employees[i].empID == idnhap) {
//				count = 1;
//				printf("\nEmpID: %d", employees[i].empID);
//				printf("\nEmpName: %s", employees[i].empName);
//				printf("\nSalary: %.2f", employees[i].salary);
//				printf("\nAllowance: %.2f", employees[i].allowance);
//				float totalSalary = employees[i].salary + employees[i].allowance;
//				printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);
//			}
//		}
//		if(count == 0) {
//			printf("\nCannot find this price. Please re-enter");
//		}
//		else{
//			break;
//		}
//	}
	//Hien thi cac thong tin co salary < 100;
//	printf("\n-----------Cac thong tin co salary < 100-----------");
//	for(i = 0; i < n; i++) {
//		if(employees[i].salary <= 100) {
//			printf("\nEmpID: %d", employees[i].empID);
//			printf("\nEmpName: %s", employees[i].empName);
//			printf("\nSalary: %.2f", employees[i].salary);
//			printf("\nAllowance: %.2f", employees[i].allowance);
//			float totalSalary = employees[i].salary + employees[i].allowance;
//			printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);
//		}
//	}

	//In ra 3 thong tin co muc luong thap nhat.
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(employees[i].salary > employees[j].salary){
				info temp = employees[i];
				employees[i] = employees[j];
				employees[j] = temp;
			}
			
		}
	}
	printf("\n-----------Top 3 employees co muc salary thap nhat-----------");
	for(i = 0; i < 3; i++) {
		printf("\nEmpID: %d", employees[i].empID);
		printf("\nEmpName: %s", employees[i].empName);
		printf("\nSalary: %.2f", employees[i].salary);
		printf("\nAllowance: %.2f", employees[i].allowance);
		float totalSalary = employees[i].salary + employees[i].allowance;
		printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);	
}
	//In ra 3 thong tin co muc luong cao nhat.
	for(i = 0; i < n; i++) {
		for(j = i + 1; j < n; j++) {
			if(employees[i].salary < employees[j].salary){
				info temp = employees[i];
				employees[i] = employees[j];
				employees[j] = temp;
			}
			
		}
	}
	printf("\n-----------Top 3 employees co muc salary cao nhat-----------");
	for(i = 0; i < 3; i++) {
		printf("\nEmpID: %d", employees[i].empID);
		printf("\nEmpName: %s", employees[i].empName);
		printf("\nSalary: %.2f", employees[i].salary);
		printf("\nAllowance: %.2f", employees[i].allowance);
		float totalSalary = employees[i].salary + employees[i].allowance;
		printf("\nTotal Salary: %f + %f = %f", employees[i].salary, employees[i].allowance, totalSalary);	
}
	


}






