#include <stdio.h>
#include <string.h>

int main(){
    int vet1[5],vet2[5], stampa[10];

    printf("Inserimento numeri nel primo vettore:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero:");
        scanf("%d", &vet1[i]);
    }

    printf("Inserimento numeri nel secondo vettore:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero:");
        scanf("%d", &vet2[i]);
    }


    printf("\n dei numeri pari e stampa:\n");
    for (int i = 0; i < 5; i++) {
        if(vet1[i]%2 == 0){
            stampa[i] = vet1[i];
        }
        else{
            stampa[i] = 0;
        }
    }
    for (int i = 0; i < 5; i++) {
        if(vet2[i]%2 == 0){
            stampa[i+5] = vet2[i];
        }
        else{
            stampa[i+5] = 0;
        }
    }

    for(int i = 0; i < 10;i++){
        printf("%d ",stampa[i]);
    }
}


