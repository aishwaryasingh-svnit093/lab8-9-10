#include<stdio.h>

//WRITE A C PROGRAM USING POINTERS TO FIND THE BIGGEST OF GIVEN LIST OF N INTEGERS

int *max(int arr[] , int n);

int main(){
	
	int n;
	printf("enter size of array:");
	scanf("%d" , &n);
	
	int arr[n];
	printf("enter elements of array: ");
	for(int i=0;i<n;i++){
		scanf("%d" , &arr[i]);
	}
	
	printf("maximum number is :%d" ,*max(arr,n) );
	
return 0;	
}

int *max(int arr[], int n){
	
	int max=0;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	int *ptr=&max;
	return ptr;
}
