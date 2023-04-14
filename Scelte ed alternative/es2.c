#include <stdio.h>

int main() {
    float number;

    printf("Inserire il numero:");
    scanf("%f",&number);

    if (number >= 0) {
        if (number == 0) {
            printf("Il valore inserito e' nullo");
        }
        else {
            printf("Il valore inserito e' positivo");
        }
    }
    else {
        printf("Il valore inserito e' negativo");
    }
}
