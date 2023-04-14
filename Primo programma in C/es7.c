#include <stdio.h>

int main(){
    float prezzo,sconto;

    printf("Inserimento dei dati:\nPrezzo:");
    scanf("%f",&prezzo);
    printf("Sconto:");
    scanf("%f",&sconto);

    printf("\nCartellino:\nPrezzo: %.2f euro\nSconto applicato: %.1f %\nPrezzo finale: %.2f",prezzo,sconto,prezzo-(prezzo*sconto/100));
}