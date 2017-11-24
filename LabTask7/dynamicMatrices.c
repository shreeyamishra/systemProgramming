#include <stdio.h>
#include <stdlib.h>

typedef char String[256];
typedef enum { false, true } bool;

double * input_matrix (int * rows, int * columns, char * name);
void output_matrix (double * matrix, int rows, int columns);
bool matrix_multiply (double * m1, int m1_rows, int m1_columns, double * m2, int m2_rows, int m2_columns, double * m3);


double * input_matrix (int * rows, int * columns, char * name) {
    double * m;
    int x, y;

    printf("# of rows in %s:\t", name);
    scanf("%d", rows);
    printf("# of cols in %s:\t", name);
    scanf("%d", columns);

    m = (double *)(malloc((*rows * *columns) * sizeof(double)));

    for (x = 0; x < *rows; x++) {
        for (y = 0; y < *columns; y++) {
            printf("Enter row %d col %d:\t", x+1, y+1);
            scanf("%lf", m + (x * *columns) + y);
        }
    }

    return m;
}

void output_matrix (double * matrix, int rows, int columns) {
    int x, y;
    for (x = 0; x < rows; x++) {
        for (y = 0; y < columns; y++) {
            printf("%4.2f\t", *(matrix + (x * columns) + y));
        }
        printf("\n");
    }
}

bool matrix_multiply (double * m1, int m1_rows, int m1_columns, double * m2, int m2_rows, int m2_columns, double * m3) {
    int i, j, k;
    double n, m, sum;
    if (m1_columns != m2_rows) {
        return false;
    }
    else {
        for (i = 0; i < m1_rows; i++) {
            for (j = 0; j < m2_columns; j++) {
                sum = 0.0;
                for (k = 0; k < m1_columns; k++) {
                    m = *(m1 + (i*m1_columns) + k);
                    n = *(m2 + (k*m2_columns) + j);
                    sum += (n * m);
                }
                *(m3 + i*m2_columns + j) = sum;
            }
        }
        return true;
    }
}

int main(void) {

    double *m1,*m2,*m3;
    int m1_rows,m1_columns,m2_rows,m2_columns;

    if (((m1 = input_matrix(&m1_rows,&m1_columns,"Matrix 1")) != NULL) &&
((m2 = input_matrix(&m2_rows,&m2_columns,"Matrix 2")) != NULL) &&
((m3 = malloc(m1_rows*m2_columns*sizeof(double))) != NULL)) {
        printf("Matrix 1\n");
        output_matrix(m1,m1_rows,m1_columns);
        printf("Matrix 2\n");
        output_matrix(m2,m2_rows,m2_columns);
        if (matrix_multiply(m1,m1_rows,m1_columns,m2,m2_rows,m2_columns,m3)) {
            printf("Product\n");
            output_matrix(m3,m1_rows,m2_columns);
            free(m1);
            free(m2);
            free(m3);
            return(0);
        } else {
            printf("Error in dimensions\n");
            free(m1);
            free(m2);
            free(m3);
            return(-1);
        }
    } else {
        free(m1);
        free(m2);
        free(m3);
        printf("Error allocating memory\n");
        return(-2);
    }
}

