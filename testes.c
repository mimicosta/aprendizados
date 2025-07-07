#include <stdio.h>

int main() {
    int n;
    int temp;
    
    printf("Escreva o tamanho da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];
    int valor = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = valor;
            valor++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("matriz espelhada \n");
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i<j){
                temp = matriz[i][j];
                matriz[i][j] = matriz[j][i];
                matriz[j][i] = temp;
            }
            
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
