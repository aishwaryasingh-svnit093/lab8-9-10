#include<stdio.h>

// WRITE A C PROGRAM TO COUNT NUMBER OF CHARACTERS, WORDS AND LINES IN A TEXT FILE

int main(){
 

 FILE *fptr;
 fptr=fopen ("test102.txt" , "r");

int count_char=0;
int count_word =0;
int count_line=0;

char ch;

while ((ch=fgetc(fptr)) != EOF){
    if(ch != ' '){
        
        count_char++;
    }
    if(ch == ' '){
        count_word++;
    }
    if( ch == '\n'){
        count_line++;
    }
}
printf("total number of characters in text file : %d\n" , count_char);
printf("total number of words in text file :%d\n" , count_word+1);
printf("total number of lines in text file :%d\n" , count_line+1);


fclose(fptr);

    return 0;
}