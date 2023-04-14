#include <stdio.h>


int visualizzazione(int N,int numeri[]){
    printf("\nVisualizzazione vettore inserito: ");
    for(int x = 0; x < N; x++){
        printf("%d ", numeri[x]);
    }
}
int scalamento_dx(int N,int numeri[]){
    printf("\nScalamento a dx: ");
    for(int x = N-1; x > 0;x--){
        numeri[x] = numeri[x-1];
    }
    numeri[0] = 0;
    for(int x = 0; x < N; x++){
        printf("%d ", numeri[x]);
    }
}
int scalamento_sx(int N,int numeri[]){
    printf("\nScalamento a sx: ");
    for(int x = 0; x < N; x++){
        numeri[x] = x==N-1? 0 : numeri[x+1];
    }
    for(int x = 0; x < N; x++){
        printf("%d ", numeri[x]);
    }
}

int main(){
    int N;

    printf("Quanti numeri? ");
    scanf("%d", &N);

    int numeri[N];
    for(int x = 0; x < N;x++){
        printf("Inserire numero: ");
        scanf("%d", &numeri[x]);
    }
    visualizzazione(N, numeri);
    scalamento_sx(N, numeri);
    scalamento_dx(N, numeri);

    return 0;

}