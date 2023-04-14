#include <stdio.h>

int main(){
    int numero;
    char mesi[12][10] = {"Gennaio","Febbraio","Marzo","Aprile","Maggio","Giugno",
                         "Luglio","Agosto","Settembre","Ottobre","Novembre","Dicembre"};

    printf("Inserire un numero tra 1 e 12:");
    scanf("%d",&numero);
    printf("Il mese corrispondente: %s",&mesi[numero-1]);
}
