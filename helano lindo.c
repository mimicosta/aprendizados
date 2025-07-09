#include <stdio.h>
#define TAM 5

int main() {
    
    int matriz[TAM][TAM];
    int valor = 1;


    for (int i = 0; i < TAM; i++) {
        if (i % 2 == 0){
            for (int j = 0; j < TAM; j++) {
            
            matriz[i][j] = valor;
            valor++;
            }
        }
        else {
            for (int j = TAM - 1; j >= 0; j--) {
                matriz[i][j] = valor;
                valor++;
            }
        }
    }

    printf("Matriz 5x5:\n");
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}