/*
    Migliorie:
    a. la lettura del file la posso fare una sola volta nel main al posto di occupare più righe
    b. se possibile rendere migliore la funzione 'numerodipendenti', renderla più leggibile
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int numerodipendenti(FILE *file){
    int N = 1000,ora, minuti, i = 0, p = 0, dipendenti = 0;
    char stringa[N][10],tem[10], letto[N][10];

    while(!feof(file)){
        fscanf(file,"%d%d%s",&ora,&minuti,tem);
        strcat(stringa[i],tem);
        printf("%s - ",&tem);
        i++;
    }
    for (int x = 0; x <= i;x++){
        bool cond = true;
        if(strcmp(stringa[0], stringa[x])!=0){
            for (int y = 0; y <= i; y++) {
                if(strcmp(stringa[x], letto[y])==0){
                    cond = false;
                }
            }
            if (cond == true){
                strcat(letto[p], stringa[x]);
                p++;
                dipendenti++;
            }
        }
    }

    printf("\nCi sono %d dipendenti diversi", dipendenti+1);
    return 1;
}
int conteggioore(FILE *file, char utente[10]){
    int ore, minuti, N = 0, precedete = 0, attuale = 0;
    char tem[10], lista[1000][10];

    while(!feof(file)){
        fscanf(file,"%d%d%s",&ore,&minuti,tem);
        attuale = (ore*60+minuti)-precedete;
        precedete = attuale;
    }
    printf("L'utente %s ha lavorato %d minuti", utente, attuale);
}

int main() {
    char sorgente[20], file[100] = "../",utente[10];
    FILE *fp;

    printf("Inserire nome file e utente (0 se non presente):");
    scanf("%s%s",sorgente,utente);
    strcat(file,sorgente);

    fp = fopen(file,"r");
    if (fp == NULL){
        printf("Errore nell'apertura del file!");
        return 0;
    }

    if(strcmp(utente,"0")==0){
        numerodipendenti(fp);
    }
    else{
        conteggioore(fp,utente);
    }
}
