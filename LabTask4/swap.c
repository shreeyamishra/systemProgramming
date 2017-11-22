#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define STRINGLENGTH  256
void input(char* buffer, int* length){
    fgets(buffer, STRINGLENGTH, stdin);
    *length = strlen(buffer);
}
void reverse(char* buffer, int length){
    int i;
    for(i=0; i<(length/2); i++){
        char temp = buffer[i];
        buffer[i] = buffer[length-1-i];
        buffer[length-1-i] = temp;
    }
}
int main(int argc, char **argv){
    char buffer[STRINGLENGTH];
    int length = 0;
    do{
      input(buffer, &length);
      reverse(buffer, length-1);
      puts(buffer);
      //printf("\n");
    }
    while(length!= 0);
    return EXIT_SUCCESS;
}
