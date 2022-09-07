#include <stdio.h>

int main(){
    int n, i, j, v[10][10], valor_linha=0, cont=0;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d",&v[i][j]);
        }
    }

    for(j=0; j<n; j++){
        valor_linha = valor_linha + v[0][j];
    }

    for(i=0; i<n; i++){
        cont=0;
        for(j=0; j<n; j++){
            cont = cont + v[i][j];
        }
        if(cont != valor_linha){
            valor_linha = -1;
        }
        cont=0;
        for(j=0; j<n; j++){
            cont = cont + v[j][i];
        }
        if(cont != valor_linha){
            valor_linha = -1;
        }
    }
    cont=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(j==i){
                cont = cont + v[i][j];
            }
        }
    }
    if(cont != valor_linha){
        valor_linha = -1;
    }
    cont=0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if((j+i)==(n-1)){
                cont = cont + v[i][j];
            }
        }
    }
    if(cont != valor_linha){
        valor_linha = -1;
    }
    printf("%d\n",valor_linha);

    return 0;
}