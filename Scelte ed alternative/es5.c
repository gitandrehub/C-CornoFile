#include <stdio.h>
#include <stdlib.h>

int main(){
    int A,B;

    printf("Inserire i due numeri:");
    scanf("%d%d",&A,&B);

    // Punto 1
    if(B > 0){
        printf("1. Il numero B e' positivo\n");
    }
    else if (B < 0){
        printf("1. Il numero B e' negativo\n");
    }
    else {
        printf("1. Il numero B e' nullo\n");
    }

    // Punto 2
    if (A%2== 0){
        printf("2. Il numero A e' pari\n");
    }
    else{
        printf("2. Il numero A e' dispari\n");
    }

    // Punto 3
    printf("3. La somma dei due: %d \n",A+B);

    // Punto 4
    printf("4a. Il valore massimo: %d\n",(abs(A)+abs(B)));
    printf("4b. Il valore minimo: %d\n",(-abs(A)-abs(B)));
}