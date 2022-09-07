#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, i, j, conta, max = 0, **matrix, *coluna, *linha;
    scanf("%d", &n);
    
    coluna = malloc(n * sizeof (int));
    linha = malloc(n * sizeof(int));
    matrix = malloc(n * sizeof (int*) );
    
    for(i=0; i<n; i++){
        coluna[i] = linha[i] = 0;
    }

    for(i=0; i<n; i++){
        matrix[i] = malloc (n * sizeof (int) );
        for(j=0; j<n; j++){
            scanf("%d", &matrix[i][j]);
            coluna[j] = coluna[j] + matrix[i][j];
            linha[i] = linha[i] + matrix[i][j];
        }
    }
    
    for(i=0; i<n; i++){
        conta = 0;
        for(j=0; j<n; j++){
            conta = linha[i] + coluna[j] - 2*matrix[i][j];
            if(conta > max){
                max = conta;
            }
        }
    }

    printf("%d\n",max);

    for(i=0; i<n; i++){
        free(matrix[i]);
    }

    free(coluna);
    free(linha);
    free(matrix);

    return 0;
}