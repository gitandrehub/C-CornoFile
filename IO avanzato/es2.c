#include <stdio.h>
#include <string.h>

void cerca(FILE *fp, char nome[30]){
    char mittente[20], destinatario[20], luogo[20];

    printf("Cartoline ricevute da %s:\n", nome);
    while(!feof(fp)){
        fscanf(fp,"%s %s %s",mittente, destinatario, luogo);
        if(strcmp(destinatario,nome)==0){
            printf("  %s da %s\n", mittente, luogo);
        }
    }
}

int main(int argc, char *argv[]){
    char file[20], comando[10], name[30];
    FILE *fp;

    strcpy(file, argv[1]);
    strcpy(comando, argv[2]);
    strcpy(name, argv[3]);
    fp = fopen(file, "r+");
    if(fp == NULL){
        printf("Errore nell'apertura del file");
    }
    else{
        if(strcmp(comando, "find")== 0){
            cerca(fp, name);
        }
        else if(strcmp(comando, "new") == 0){
            fprintf(fp,"%s %s %s", argv[3], argv[4], argv[5]);
        }
        else{
            printf("Inserimento errato dei parametri");
        }
    }
    fclose(fp);
}