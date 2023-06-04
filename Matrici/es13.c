#include <stdio.h>
#include <stdbool.h>

void crea_matrice(int matrice[][4], int *pos);
bool ordine(int matrice[][4]);
void scambio(int mossa, int matrice[][4], int *pos);

int main(){
    int matrice[4][4], pos[2], mossa, x1, x2, y1, y2;

    crea_matrice(matrice, pos);
    while(ordine(matrice) == false){
        if(pos[0] == 0) {
            x1 = pos[0];
            x2 = pos[0]+1;
        }
        else if(pos[0] == 3){
            x1 = pos[0]-1;
            x2 = pos[0];
        }
        else{
            x1 = pos[0]-1;
            x2 = pos[0]+1;
        }
        if(pos[1] == 0){
            y1 = pos[1];
            y2 = pos[1]+1;
        }
        else if(pos[1] == 3){
            y1 = pos[1]-1;
            y2 = pos[1];
        }
        else{
            y1 = pos[1]-1;
            y2 = pos[1]+1;
        }
        printf("> Mosse disponibili: %d, %d, %d, %d >", matrice[x1][pos[1]], matrice[x2][pos[1]], matrice[pos[0]][y1], matrice[pos[0]][y2]);
        scanf("%d", &mossa);
        if(mossa == matrice[x1][pos[1]] || mossa == matrice[x2][pos[1]] || mossa == matrice[pos[0]][y1] || mossa == matrice[pos[0]][y2]){
            scambio(mossa, matrice, pos);
        }
        else{
            printf("Mossa scelta errata\n");
        }
    }
}

void scambio(int mossa, int matrice[][4], int *pos){
    for(int i = 0; i<4;i++){
        for(int j = 0;j<4;j++){
            if(matrice[i][j] == mossa){
                pos[0] = i;
                pos[1] = j;
                matrice[i][j] = 0;
            }
            else if(matrice[i][j] == 0){
                matrice[i][j] = mossa;
            }
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

bool ordine(int matrice[][4]){
    int precedente;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(matrice[i][j] < precedente && i != 0 && j != 0){
                return false;
            }
            else if(i == 0 && j == 0 && matrice[i][j] != 1){
                return false;
            }
            precedente = matrice[i][j];
        }
    }
    return true;
}


void crea_matrice(int matrice[][4], int *pos){
    int riempi[16] = {8, 5, 2, 4, 11, 1, 0, 7, 12, 10, 3, 15, 9, 13, 14, 6};
    int count = 0;
    for(int i = 0;i<4;i++){
        for(int j = 0;j<4;j++){
            if(riempi[count] == 0){
                pos[0] = i;
                pos[1] = j;
            }
            matrice[i][j] = riempi[count];
            printf("%d ", matrice[i][j]);
            count ++;
        }
        printf("\n");
    }
}