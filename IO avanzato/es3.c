#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define file "registro.txt"

int main(int argc, char *argv[]){
    FILE *fp = fopen(file, "w");
    char elemento[2][10];
    int N = 0;
    bool find = false;

    if(strcmp(argv[2], "voto") == 0) {
        fscanf(fp, "%d", &N);
        for(int i = 0;i < N;i++){
            fscanf(fp, "%s %s", elemento[1], elemento[2]);
            printf("%s %s", elemento[1], elemento[2]);
        }
    }
    fclose(fp);
    return 0;
}
// gcc -o es3.exe es3.c
// .\es3.exe esame voto 24356 24