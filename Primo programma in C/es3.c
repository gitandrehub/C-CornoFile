#include <stdio.h>

int main(){
    int numeber;

    printf("Inserire il numero:");
    scanf("%d",&numeber);

    printf("Il numero successivo:%d\nIl numero precedente:%d",(numeber+1),(numeber-1));
}