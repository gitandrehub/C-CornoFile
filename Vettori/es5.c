#include <stdio.h>

int main(){
    int N = 5, numeri[N], i = 0;

    printf("Inserire il numero: ");
    scanf("%d",&numeri[i]);
    while(numeri[i] != '|' && i != N){
        i++;
        printf("Inserire il numero: ");
        scanf("%d", &numeri[i]);
    }
    for(int  x = 0; x < i; x++){
        if(numeri[x] != 0 && (char) (numeri[x]) != '|') {
            int e = 1;
            printf("\nElemento %d: %d ", x + e, numeri[x]);
            for (int a = 0; a < numeri[x]; a++) {
                printf("*");
            }
        }
    }
}