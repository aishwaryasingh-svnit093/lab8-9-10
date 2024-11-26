#include<stdio.h>
int main (){
    char arr[100];
    fgets(arr,100,stdin);
    char *ptr = arr;
    int count =0;
    for(int i=0;(*(ptr+i))!='\0';i++){
        count++;
    }
    printf("length of string including spaces is %d \n",count);
    int _count=0;
    for(int i=0;(*(ptr+i))!='\0';i++){
        if(*(ptr+i)==' '){
            _count++;
        }
    }
    printf("%d",_count);
    int a ;
    a= count - _count;
    printf("length of string excluding spaces is %d",a); 
    return 0; 
}
