#include<stdio.h>

//AN ENUMERATION WITH COLOUR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE

enum colour {
	
	Red=1,       
    Green,     
    Blue,      
    Yellow,    
    White,     
    Black,
	
};

int main(){
	
	enum colour name;
	
	name = Red;
	
	printf("the day of the colour is : %d\n\n" , Red );
	
	switch(name){
		
		case Red :
			printf("Red: #FF0000\n");
			break;
			
		case Green:
		printf("Green: #00FF00\n");
		break;
		
		case Blue:
		printf("Blue: #0000FF\n");
		break;	
		
		case Yellow:
			printf("Yellow: #FFFF00\n");
			break;
			
		case White :
		printf("White: #FFFFFF\n");
		break;
		
		case Black :
		printf("Black: #000000\n");
		break;
		
		default :
		printf("invalid colour");
		
	}
	
	
	
	return 0;
}
