#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define maxb 10

int main() {
    char n_bene[maxb][100], s_bene[100], modo;
    int q_bene[maxb], s_qta, bp = 0;
    bool in = false;

    for(int i = 0; i < maxb; i++){
        q_bene[i] = 0;
        s_bene[i] = ' ';
    }

    do{
        printf("Componente:");
        scanf("%s %c %d",s_bene, &modo, &s_qta);
        if(modo == 'E'){
            for(int i = 0; i < bp; i++){
                if(strcmp(n_bene[i],s_bene) == 0) {
                    q_bene[i] += s_qta;
                    in = true;
                }
            }
            if (in == false){
                strcpy(n_bene[bp], s_bene);
                q_bene[bp] = s_qta;
                bp ++;
            }
        }
        else if(modo == 'U'){
            for(int i = 0; i < bp; i++){
                if(strcmp(n_bene[i],s_bene) == 0) {
                    q_bene[i] -= s_qta;
                    in = true;
                }
            }
            if (in == false){
                printf("Il bene deve prima entrare per farlo uscire\n");
            }
        }
        else{
            printf("Modo inserito errato!\n");
        }
        in = false;
    }
    while(strcmp(s_bene,"FINE") != 0 && bp != maxb);

    printf("\nBeni presenti nel magazzino:\n");
    for(int i = 0; i < bp;i++){
        printf("%s -> %d\n",n_bene[i],q_bene[i]);
    }

    return 0;
}