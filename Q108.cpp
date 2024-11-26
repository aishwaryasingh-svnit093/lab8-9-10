//  WITHOUT USING INBUILT STRING FUNCTIONS, PERFORM THE FOLLOWING IN C LANGUAGE: 
// A. COPY ONE STRING INTO ANOTHER 
// B. COMPARE TWO STRINGS 
// C. CONCAT TWO STRINGS 
// D. REVERSE A GIVEN STRING 

#include<stdio.h>
#include<string.h>

int main() {

    char str1[30], str2[10];
    printf("Enter the string : ");
    gets(str1);
    int x=strlen(str1);

//A
    printf("A. COPY ONE STRING INTO ANOTHER \n");
    for(int i=0; i<x; i++) {
        str2[i]=str1[i];
    }
    for(int i=0; i<x; i++) {
        printf("%c", str2[i]);
    }
    printf("\n\n");

//B
    int count=0;
    char str3[10];
    printf("B. COMPARE TWO STRINGS \n");
    printf("Enter another string : ");
    gets(str3);
    for(int i=0; i<x; i++) {
        if(str1[i]>str3[i]) {
            printf("%d\n\n", str1[i]-str3[i]);
            count++;
            break;
        }
        else if(str1[i]<str3[i]) {
            printf("%d\n\n", str3[i]-str1[i]);
            count++;
            break;
        }
    }
    if(count==0) 
        printf("0\n\n");

//C
    printf("C. CONCAT TWO STRINGS  \n");
    int y=strlen(str3);
    for(int i=0; i<y; i++) {
        str1[x+i]=str3[i];
    }
    int z=strlen(str1);
    for(int i=0; i<z; i++) {
        printf("%c", str1[i]);
    }
    printf("\n\n");

//D
    printf("D. REVERSE A GIVEN STRING \n");
    char str4[10], str5[10];
    printf("Enter a string : ");
    gets(str4);
    int w=strlen(str4);
    int j=w-1;
    for(int i=0; i<w; i++) {
        str5[i]=str4[j];
        j--;
    }
    for(int i=0; i<w; i++) {
        printf("%c", str5[i]);
    }
    
    return 0;
}
