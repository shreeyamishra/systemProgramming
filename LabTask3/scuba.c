#include <math.h>
#include <stdio.h>

int main() {
int d,p;
float ap, o2p, o2g;
        printf("Enter depth and percentage O2   : ");
        scanf ("%d %d", &d, &p);
    printf("\n");
    ap = (d/33)+1.0;
    printf("Ambient pressure                : %1.1f\n",ap);
    o2p = (p*ap)/100;
    printf("O2 pressure                     : %1.2f\n",o2p);

    if(o2p>=0.0 && o2p<0.1){
        printf("O2 group                        : A");
    }
    if(o2p>=0.1 && o2p<0.2){
                printf("O2 group                        : B");
        }
        if(o2p>=0.2 && o2p<0.3){
                printf("O2 group                        : C");
        }
        if(o2p<=1.4 && o2p>1.3){
                printf("O2 group                        : N");
        }
        if(o2p>1.4){
                printf("O2 group                        : O \n \n");
        }
    printf("\n");
    if(o2p>=1.4){
                printf("Exceeds maximal O2 pressure     : true \n");
        }
    else{
                printf("Exceeds maximal O2 pressure     : false \n");
        }
    if(o2p>=1.6){
                printf("Exceeds contingency O2 pressure : true \n");
        }
    else{
                printf("Exceeds contingency O2 pressure : false \n");
        }
}

