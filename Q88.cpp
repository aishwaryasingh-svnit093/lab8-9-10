#include<stdio.h>

//WRITE A PROGRAM TO COPY ELEMENT OF ONE ARRAY TO ANOTHER ARRAY USING POINTERS.

int *change(int num[] , int n);

int main(){
	
	int n;
	printf("enter the value of n: ");
	scanf("%d" , &n);
	
	int num[n];
	printf("enter values of array : ");
	for(int i=0;i<n;i++){
		scanf("%d" , &num[i]);
	}
	

	for(int i=0;i<n;i++){
	
	printf("%d\t" , *(change(num,n)+i));
}
	
return 0;	
}

int *change(int num[] , int n){
	
	int num1[n];
	for(int i=0;i<n;i++){
		num1[i]=num[i];
	}
	int *ptr = num1;
	
	return ptr;
}
