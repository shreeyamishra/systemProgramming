#include <stdio.h>
#include <stdlib.h>
void input(float* income, float* deduction){
    float test = 0.0;
    do{
        printf("Enter next amount : ");
        scanf("%f", &test);
        if(test > 0.0){
          *income += test;
        }
        if(test < 0.0){
          *deduction+= ((-1) * test);
        }
    }
    while(test != 0);

}
float Income(float income, float deduction){
    float taxableIncome = 0.0;
    if(income >= deduction)
      taxableIncome = income - deduction;
    else
      taxableIncome = 0.0;
    return taxableIncome;
}
char taxGroup(float taxableIncome){
    char group = 'Z';
    if(taxableIncome >= 500000)
         group = 'S';
    if(taxableIncome >= 200000)
         group = 'Q';
    if(taxableIncome >= 100000)
         group = 'M';
    if(taxableIncome >=50000)
         group = 'A';
    if(taxableIncome >= 20000)
         group = 'R';
    else
        group = 'P';
    return group;
}
void display(float income, float deduction, float taxableIncome, char group){
    printf("Income         = $%f", income);
    printf("\n");

    printf("Deductions     = $%f", deduction);
    printf("\n");

    printf("Taxable Income = $%f", taxableIncome);
    printf("\n");

    printf("Tax group      = %c", group);

}
int main(int argc, char **argv){
    float income = 0.0;
    float deduction = 0.0;
    float taxableIncome = 0.0;
    char group = 'Z';

    input(&income, &deduction);
    taxableIncome = Income(income, deduction);
     group = taxGroup(taxableIncome);

     display(income, deduction, taxableIncome, group);
    return EXIT_SUCCESS;
}

