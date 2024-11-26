#include<stdio.h>
#include<string.h>

//WRITE A PROGRAM TO COPY A STRING IN REVERSE ORDER TO ANOTHER STRING VARIABLE USING POINTERS.FOR EXAMPLE, 
//ST =” SVNIT JAVA” IS COPIED AS “AVAJ TINVS ”



int main (){
	
	char arr[100];
	fgets(arr,100,stdin);
	char *ptr=arr;
	int x=strlen(arr);
	
	char arr1[100];
	char *ptr1=arr1;
	for(int i=0;(*(ptr+i))!='\0';i++){
		*(ptr1+i)=*(ptr +(x-i-1));
	}
	

	
	for(int i=0;(*(ptr+i))!='\0';i++){
	printf("%c" ,*(ptr1+i));
	}
	
	
}

