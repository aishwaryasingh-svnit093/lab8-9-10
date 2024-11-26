#include<stdio.h>

//  A FILE CALLED “ LNMIIT STUDENT.JAVA” CONTAINS INFORMATION SUCH AS STUDENT ROLL NUMBER
//  , NAME AND TOTAL MARKS. WRITE A C PROGRAM TO CREATE A FILE TO STORE DETAILS OF N 
//  STUDENTS


int main (){
FILE *fptr;
fptr=fopen("LNMIIT STUDENT.java" , "w");

struct student {

 char name[30];
 int roll;
 int marks;

};



int n;
printf("enter number of students : ");
scanf("%d" , &n);
struct student stu[n];


for(int i=0;i<n;i++){
    printf("enter details of student %d: " , i+1);
    scanf("%s" , &stu[i].name);
    scanf("%d" , &stu[i].roll);
    scanf("%d" , &stu[i].marks);

}

for(int i=0;i<n;i++){
    fprintf(fptr , "student name : %s\n" , stu[i].name);
    fprintf(fptr , "student roll number : %d\n" , stu[i].roll);
    fprintf(fptr , "student marks : %d\n" , stu[i].marks);

}


fclose(fptr);
return 0;
}