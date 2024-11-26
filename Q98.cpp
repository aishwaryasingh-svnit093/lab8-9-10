//Write a C program to find the product of 2 matrics using pointer and using dynamic memory alocation.

#include <stdio.h>
#include <stdlib.h>

int main() {

    int n;
    printf("Enter dimension : ");
    scanf("%d", &n);

    int rows = n, cols = n; 

    //1
        int** arr1= (int**)malloc(rows * sizeof(int*));
        
        for (int i = 0; i < rows; i++) {
            arr1[i] = (int*)malloc(cols * sizeof(int));
        }

        printf("Enter first array... \n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &arr1[i][j]);
            }
        }

    //2
        int** arr2= (int**)malloc(rows * sizeof(int*));
        
        for (int i = 0; i < rows; i++) {
            arr2[i] = (int*)malloc(cols * sizeof(int));
        }

        printf("Enter second array... \n");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                scanf("%d", &arr2[i][j]);
            }
        }
        
    //3
        int** arr3= (int**)malloc(rows * sizeof(int*));
        
        for (int i = 0; i < rows; i++) {
            arr3[i] = (int*)malloc(cols * sizeof(int));
        }

    for(int i=0; i<rows; i++) {
        for(int j=0; j<cols; j++) {
            arr3[i][j]=0;
            for(int k=0; k<n; k++) {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }

    printf("Multiplication......\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
