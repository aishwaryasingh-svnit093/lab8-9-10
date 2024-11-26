#include<stdio.h>

// WRITE A C PROGRAM TO ADD /APPEND INFORMATION TO THE FILE “ LNMIIT STUDENT.DAT”

int main(){

FILE *fptr;
fptr = fopen("LNMIIT STUDENT.DAT" , "a");

printf("enter information of file\n");

char name[30];
printf("enter name of student: ");
scanf("%s" , &name);

int age;
printf("enter age: ");
scanf("%d" , &age);

float cgpa;
printf("enter cgpa: ");
scanf("%f" , &cgpa);

fprintf( fptr , "student name : %s \n " , name );
fprintf( fptr , "student age : %d \n " ,age );
fprintf( fptr , "student cgpa : %f \n " , cgpa );

fclose(fptr);

    return 0;
}