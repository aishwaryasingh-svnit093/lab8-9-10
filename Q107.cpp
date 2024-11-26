//IMPLEMENT A FUNCTION NAMED AS FLIP; WHICH WILL TAKE A NUMBER AS INPUT AND FLIP ITS LAST N DIGITS

#include<stdio.h>
#include<math.h>
int flip(int n , int m);

int main(){
	
	int n;
	printf("enter a number that has to be flipped : ");
	scanf("%d" , &n);
	
	int m;
	printf("enter the last digits that has to be flipped : ");
	scanf("%d" , &m);
	
	printf("\n\n");
	
	printf("the flipped number is : %d" , flip(n,m));
	
	return 0;
}

int flip(int n , int m){
	
	int r, sum=0;
	for(int i=0;i<m;i++){
		
		r=n%10;
		sum = sum+ r*(pow(10,m-i-1));
		n=n/10;
		
	}
	printf("%d\n%d\n" , sum , n);
	return ((n*pow(10,m))+sum);
	
}
