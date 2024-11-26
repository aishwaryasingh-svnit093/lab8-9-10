#include<stdio.h>
#include<string.h>
//WRITE A C PROGRAM USING POINTER TO COUNT THE NUMBERS OF WORDS IN A GIVEN STRING

int *name(char sentence[] );

int main(){
	
	
	char sentence[100];
	fgets(sentence,100,stdin);
	printf("number of words in entered string :%d " , *name(sentence));
	
	
	
}

int *name(char sentence[] ){
	
	int x;
	x=strlen(sentence);
	int count=1;
	for(int i=0;i<x;i++){
	
	if(sentence[i]==' '){
		count++;
	}
}

 int *ptr=&count;
 return ptr;	
}
