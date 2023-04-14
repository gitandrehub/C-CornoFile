#include <stdio.h>
//equazione = ax+b;

int main(){
    float a,b,x;

    printf("Inserire i due numeri:");
    scanf("%f%f",&a,&b);
    if (a == 0 && b != 0){
        if (b > 0){
            printf("x vale -infinito");
        }
        else{
            printf("x vale + infinito");
        }
    }
    else{
        printf("x vale: %.2f", -b/a);
    }
}