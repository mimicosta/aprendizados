#include <stdio.h>

int main(){

    int matriz[5][5], cont = 1;

    matriz[0][2] = cont;
    
    while (cont <= 25){

        for(int i = 0; i < 5; i++){
         for(int j = 0; j < 5; j++){
            if(matriz[i][j] == cont){
                if(matriz[i][j] > cont){
                    i--;
                }
                i--;
                j--;
                if(i > 0 && j > 0){
                    cont++; 
                    matriz[i][j] = cont;
                }else{
                    if(i < 0){
                        cont++;
                        matriz[5][j - 1] = cont;
                    }else{
                        if(j < 0){
                            cont++;
                            matriz[i][5] = cont;
                        }else{
                            cont++;
                            matriz[5][5] = cont;
                        }

                    }
                }
                
            }

        }
        

    }
    }
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            prinf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    


}