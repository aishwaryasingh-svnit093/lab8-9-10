#include<stdio.h>

//WRITE A PROGRAM TO COPY ONE ARRAY INTO ANOTHER ARRAY .ORDER OF ELEMENTS OF SECOND ARRAY SHOULD BE OPPOSITE TO FIRST ARRAY

int *change(int num[] , int n);

int main(){
	
	int n;
	printf("enter size of array :");
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

int *change(int num[]  , int n){
	
	int num1[n];
	for(int i=0;i<=n;i++){
		num1[i]=num[n-i-1];
	}


	
	int *ptr=num1;
	return ptr;
	
}
