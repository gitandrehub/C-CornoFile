#include <stdio.h>

int main(){
    int op1,op2;
    float media,one,two;

    printf("Inserire i due numeri:");
    scanf("%d%d",&op1,&op2); // 23 e 30
    media = (op1+op2)/2.0;          // = 26.5
    one = (op1+op2)/2;              // = 26
    two = (float) (op1+op2)/2;      // = 26.5
    printf("La media dei due:%.2f",media);
}
