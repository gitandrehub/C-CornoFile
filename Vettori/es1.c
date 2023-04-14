#include <stdio.h>
#include <stdbool.h>
int ricerca(int N, int vettore[N]){
    bool presente = false;
    int riferimento;

    for (int i = 0; i < N; i++) {
        printf("Inserimento numero:");
        scanf("%d", &vettore[i]);
    }
    printf("\nInserire il parametro:");
    scanf("%d",&riferimento);
    for (int i = 0; i <= N; i++) {
        if(riferimento == vettore[i]){
            presente = true;
        }
    }
    if (presente){
        printf("Il numero '%d' e' presente nel vettore", riferimento);
    }
    else{
        printf("Il numero '%d' non e' presente nel vettore", riferimento);
    }
    return 1;
}

int main(){
    int N, vettore[N];

    printf("Quanti numeri?");
    scanf("%d",&N);

    if (N > 30){
        printf("Errore!");
        return 0;
    }
    else {
        ricerca(N,&vettore[N]);
    }
}
