#include<stdio.h>

// WRITE A C PROGRAM TO READ THE TEXT FILE AND ALSO COUNT THE NUMBER OF VOWELS PRESENT IN THE FILE
int main(){
FILE *fptr;
fptr=fopen("test.txt" , "r");

int count=0;
char ch;
ch=fgetc(fptr);

while(ch!=EOF){
    ch=fgetc(fptr);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        count++;
    }
}
printf("vowels = %d" , count);

fclose(fptr);

return 0;
}
