#include <stdio.h>
#include <stdlib.h>

#define N 3

typedef int Matrix[N*N];

void inputMatrix(Matrix M){
    int i, j;
    printf("Enter 9 integers: ");
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            scanf("%d", (M+3*i+j));
        }
    }
}



void printMatrix(Matrix M){
    int i, j;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            printf("%6d ", *(M+(3*i+j)));
        }
        printf("\n");
    }
}




void multiplyMatrix(Matrix M1, Matrix M2, Matrix M3){

    int i, j, k, sum;
    for(i = 0; i < N; i++){
        for(j = 0; j < N; j++){
            sum = 0;
            for(k = 0; k < N; k++){
                sum += *(M1+(3*i+k)) * *(M2+(3*k+j));
            }
            *(M3+(3*i+j)) = sum;
        }
    }
}

int main(void){
    Matrix M1, M2, M3;
    inputMatrix(M1);
    inputMatrix(M2);
    multiplyMatrix(M1, M2, M3);
    printMatrix(M3);
    return (EXIT_SUCCESS);
}
