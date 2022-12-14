#include <stdio.h>
#include <stdlib.h>

double detLaplace(int n, double a[n][n]){
    if(n == 1){
        //Caso base: matriz 1x1
        return a[0][0];
    }else{
        double det = 0;
        int i, row, col, j_aux, i_aux;
        
        //Escolhe a primeira linha para calcular os cofatores
        for(i = 0; i < n; i++){
            //ignora os zeros (zero vezes qualquer número é igual zero)
            if (a[0][i] != 0) {
                double aux[n - 1][n - 1];
                i_aux = 0;
                j_aux = 0;
                //Gera as matrizes para calcular os cofatores
                for(row = 1; row < n; row++){
                    for(col = 0; col < n; col++){
                        if(col != i){
                            aux[i_aux][j_aux] = a[row][col];
                            j_aux++;
                        }
                    }
                    i_aux++;
                    j_aux = 0;
                }
                double factor = (i % 2 == 0)? a[0][i] : -a[0][i];
                det = det + factor * detLaplace(n - 1, aux);
            }
        }
        return det;
    }
}
//Testes
int main() {
    double a[5][5] = {{1,8,3,5,0},
                      {0,-1,7,9,1},
                      {0,0,3,2,4},
                      {0,0,0,-6,-1},
                      {0,0,0,0,2}};
    printf("%.16f\n", detLaplace(5, a));
    double b[3][3] = {{2,-2,-1},
                      {3,-4,1},
                      {1,1,5}};
    printf("%.16f\n", detLaplace(3, b));
    return 0;
}