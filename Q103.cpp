#include<stdio.h>

//WRITE A C PROGRAM TO DEFINE A MACRO TO FIND BIGGEST NUMBER OF TWO GIVEN NUMBERS

#define MAX(x,y) ((x)>(y) ? (x) : (y))
int main(){
  
  int num1;
  int num2;
  printf("enter two numbers : ");
  scanf("%d" , &num1);
  scanf("%d" , &num2);
  
  int biggest = MAX ( num1,num2);
  printf("the biggest of two numbers is : %d" , biggest);	
	
	
	
	
	return 0;
}

