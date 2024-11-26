#include<stdio.h>
//WRITE A C PROGRAM TO COUNT THE NUMBER OF VOWELS IN A STRING USING POINTER


int *print(char name[30]);

int main(){
	
	char name[30];
	fgets(name,30,stdin);
	
	printf("the numbers of vowels is : %d" , *print(name));
	
	
	
	
	return 0;
}

int *print(char name[30]){
	
	int count=0;
	for(int i=0;i<30;i++){
		if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u' ){
			count++;
		}
	}
int	*ptr= &count;
return ptr;	
}
