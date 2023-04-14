#include <stdio.h>
#include <math.h>
#define pi 3.14

int main(){
    int D;

    printf("Inserire il numero intero D:");
    scanf("%d",&D);

    printf("L'area del quadrato:%d\n",(D*D));
    printf("L'area del cerchio:%.2f\n",(pi*D*D/4));
    printf("L'area del triangolo equilatero: %.2f\n", ((sqrt(3)/4)*D*D));
}