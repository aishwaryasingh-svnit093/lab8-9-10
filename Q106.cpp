#include<stdio.h>
#include<string.h>

//CREATE A STRUCTURE NAMED ITEM THAT HAS MEMBERS NAMELY, ITEM_NAME, QUANTITY, PRICE AND AMOUNT. 
//IMPLEMENT A USER-DEFINED FUNCTION THAT TAKES READ ITEM_NAME, QUANTITY AND PRICE AS INPUT AND 
//CALCULATE AMOUNT= QUANTITY * PRICE AND PRINT THE SAME AS OUTPUT.

struct name_item{
	
	char name[100];
	int quantity;
	int price;
	float amount;
	
	
};

void print(struct name_item i1);

int main (){
	
	

struct name_item i1;	
printf("enter details for item: \n");
printf("enter item name: ");
scanf("%s" , &i1.name);

printf("enter quantity: ");
scanf("%d" , &i1.quantity);

printf("enter price: ");
scanf("%d" , &i1.price);	
	
printf("enter amount: ");
scanf("%f" , &i1.amount);

print(i1);	
}

void print(struct name_item i1){
	
	printf("\nitem name : %s\nquantity : %d\nprice : %d\namount : %f\n" , i1.name,i1.quantity,
	i1.price,i1.amount);
}
