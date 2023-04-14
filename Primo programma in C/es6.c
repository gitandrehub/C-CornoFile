#include <stdio.h>

int main(){
    float A,B;

    printf("Inserire i due numeri:");
    scanf("%f%f",&A,&B);

    printf("La somma: %.2f\n",(A+B));
    printf("La differenza: %.2f\n",(A-B));
    printf("Il prodotto: %.2f\n",(A*B));
    printf("La differenza: %.2f\n",(A/B));
}
