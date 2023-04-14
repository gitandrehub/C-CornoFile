#include <stdio.h>

int main(){
    float A,B,C;
    char angolo;

    printf("Scrivere i valori dei lati del triangolo:");
    scanf("%f%f%f",&A,&B,&C);

    if (A == B && B == C){
        printf("Triangolo equilatero\n");
    }
    else if(A != B && B != C && A != C){
        printf("Triangolo scaleno");
    }
    else if(A == B || A == C || B == C){
        printf("Triangolo isoscele");
    }
    else{
        printf("E' presente un'angolo acuto (1 sì, 0 no)?");
        scanf("%c",&angolo);

        if (angolo == '1'){
            printf("Triangolo rettangolo");
        }
        else{
            printf("Un cazzo");
        }
    }
}
