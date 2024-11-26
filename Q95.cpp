#include<stdio.h>
#include<string.h>

//WRITE A C PROGRAM TO DECLARE A STRUCTURE WITH DATA MEMBERS EMPLOYEE NUMBER ,EMPLOYEE NAME AND BASIC PAY OF THE 
//EMPLOYEE. DECLARE A STRUCTURE POINTER AND AN ARRAY EMPLOY WITH 50 ELEMENTS .THE PROGRAM SHOULD READ ‘N’ EMPLOYEE 
//DETAILS AND PRINT THE LIST OF ALL EMPLOYEE ALONG WITH THE BASIC A PAY.

struct employee{
	
	char name[20];
	int emp_no;
	float basic_pay;
	
};

int main(){
	
	
	
	
	int n;
	printf("enter number of employees : ");
	scanf("%d" , &n);
	struct employee emp[n];
	
	for(int i=0;i<n;i++){
	

	printf("enter details for employee %d\n" , i+1);
	printf("employee name : ");
	scanf("%s" , &emp[i].name);
	
	printf("employee number: ");
	scanf("%d" , &emp[i].emp_no);
	
	printf("employee basic pay: ");
	scanf("%f" , &emp[i].basic_pay);
}


    for(int i=0;i<n;i++){
    	struct employee *ptr=&emp[i];
    	printf("employee name: %s\n" , ptr->name );
    	printf("employee name: %d\n" , ptr->emp_no );	
		printf("employee name: %f\n" , ptr->basic_pay );
	}







}
	
