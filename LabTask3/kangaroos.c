#include <math.h>
#include <stdio.h>

int main() {
    float i, j, k;
    printf("Enter side of square in km  :");
    scanf ("%f", &i);
    printf("Enter roads length in km    :");
    scanf ("%f", &j);
    printf("Enter number of 'roos       :");
    scanf("%f", &k);
    float l = ((k * j * 1.47)/(i * i));
    printf("Expected number of kills is : %3.1f\n",l);
}
