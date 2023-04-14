#include <stdio.h>
#include <stdlib.h>

#define k 5
#define n 5

int main(){
    char k_studenti[k][10] = {"Mario", "Luca", "Giacomo", "Andrea", "Matteo"};
    char n_giudici[n][10] = {"Lara", "Laura", "Marco", "Pietro", "Pia"};
    int g_studenti[k][n] = {{2, 3, 4, 1, 2},
                            {3, 4, 3, 4, 2},
                            {5, 5, 5, 5, 5},
                            {4,4,4,4,4},
                            {4,5,5,4,3}};
    int somma_s[k], somma_g[n], ig = 0;
    int best = 0, worst = 0, previous = 0;

    for(int i = 0; i<k; i++){ somma_s[i] = 0; somma_g[i] = 0; }

    for(int i = 0; i<k; i++){
        for(int j = 0; j<n; j++){
            int valore = g_studenti[i][j];
            somma_s[i] += g_studenti[i][j];
            somma_g[ig] += g_studenti[i][j];
            ig += 1;
        }
        ig = 0;
    }
    for(int i = 0; i<k; i++){
        if(i == 0){
            previous = somma_s[i];
        }
        else{
            if(somma_s[i] > previous){
                best = i;
                previous = somma_s[i];
            }
        }
    }
    for(int i = 0; i<k; i++){
        if(i == 0){
            previous = somma_g[i];
        }
        else{
            if(somma_g[i] < previous){
                worst = i;
            }
        }
    }
    printf("Lo studente piu' intelligente: %s con %d\n", k_studenti[best], somma_s[best]);
    printf("Il giudice piu' severo: %s con %d", n_giudici[worst], somma_g[worst]);
}