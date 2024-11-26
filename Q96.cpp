//Write a C program to sort the given n number of strings in ascending order using pointers.
#include<string.h>
#include<stdio.h>

//int order( int x, char str[][]);

int main() {

    int n;
    printf("Enter the number of string : ");
    scanf("%d", &n);

    char str[n][10];

    for(int i=0; i<n; i++) {
        scanf("%s", &str[i]);
    }

    //order(n, str);
    
    char temp[10];
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(strcmp(str[i],str[j])>0) {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }

    pritnf("\n");

    for(int i=0; i<n; i++) {
        puts(str[i]);
    }

    return 0;
}

// int order(int x, char str[][10]) {
//     char temp[10];
//     for(int i=0; i<x; i++) {
//         for(int j=i+1; j<x; j++) {
//             if(strcmp(str[i],str[j])>0) {
//                 strcpy(temp,str[i]);
//                 strcpy(str[i],str[j]);
//                 strcpy(str[j],temp);
//             }
//         }
//     }
// }
