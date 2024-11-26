#include<stdio.h>
#include<math.h>

//WRITE A PROGRAM TO CALCULATE THE SQUARE AND CUBE OF AN ENTERED NUMBER USING POINTER OF A VARIABLE 
//CONTAINING THE ENTERED NUMBER

void square(int *n);
void cube(int *m);

int main(){
	
	int n;
	printf("enter number: ");
	scanf("%d" , &n);
	int b=n;
	square(&b);
	cube(&n);
	
}

void square(int *j){
	
	(*j)=(*j)*(*j);
	printf("square:%d\n" , *j);
}

void cube(int *m){
	
	(*m)=pow(*m,3);
	printf("cube : %d\n" , *m);
}
