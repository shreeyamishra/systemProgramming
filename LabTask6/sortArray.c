#include <stdio.h>
#include <stdlib.h>

#define LENGTH 5

typedef int *IntPntr;
typedef int ArrayOfInts[LENGTH];
typedef IntPntr ArrayOfPointers[LENGTH];

pid_t getpid (void);

//int getRandomInt (void) {
    //static int x = 5; 
    //return x--;

int getRandomInt (void) {
    return rand();
}

void init (ArrayOfInts ints, ArrayOfPointers pointers) {
    int i;
    for (i = 0; i < 5; i++) {
        ints[i] = getRandomInt();
        pointers[i] = &(ints[i]);
    }
}

void printIntegers (int * arr) {
    int i;
    for (i = 0; i < LENGTH; i++) {
        printf("\t %d: %d\n", i, *(arr + i));
    }
}

void printIntegersByPointer (int ** arr) {
    int i;
    for (i = 0; i < LENGTH; i++) {
        printf("\t %d: %d\n", i, **(arr + i));
    }
}

void printPointers (int ** arr) {
    int i;
    for (i = 0; i < LENGTH; i++) {
        printf("\t %d: %p\n", i, *(arr + i));
    }
}

void bubbleSort (int * arr) {
    int i, j;
    for (i = 0; i < LENGTH - 1; i++) {
        for (j = 0; j < LENGTH - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int b = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = b;
            }
        }
    }
}

void bubbleSortPointersByPointers (int ** arr) {
    int i, j;
    for (i = 0; i < LENGTH - 1; i++) {
        for (j = 0; j < LENGTH - i - 1; j++) {
            if (**(arr + j) > **(arr + j + 1)) {
                int * b = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = b;
            }
        }
    }
}
int main (void) {
    ArrayOfInts myInts;
    ArrayOfPointers myPointers;
    srand(getpid());
    init(myInts, myPointers);
    //initialize arrays

    printf("---- Initialized array of integers ---- \n");
    printIntegers(myInts);
    printf("---- Sorted array of pointers ---- \n");
    bubbleSort(myInts);
    printIntegersByPointer(myPointers);
    printf("---- Sorted array of integers ---- \n");
    bubbleSortPointersByPointers(myPointers);
    printIntegersByPointer(myPointers);
    printf("---- Array of pointers ---- \n");
    printIntegers(myInts);
}

