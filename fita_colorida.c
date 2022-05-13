#include <stdio.h>
#include <math.h>

int achaPosZero(int v[], int n, int pos){
    int i, x[n], j = 0, contador = 0, aux, min=10000;
    for(i=0; i<n; i++){
        if(v[i] == 0){
            x[j++] = i;
        }
    }
    for(i=0; i<j; i++){
        aux = abs(pos - x[i]);
        if(aux < min){
            min = aux;
        }
    }
    return min;
}

int fita_colorida(int v[], int n){
    int i, x[n], aux, j=0;
    for(i=0; i<n; i++){
        if(v[i] != 0){
            aux = achaPosZero(v,n,i);
            if(aux>9){
                aux = 9;
            }
            x[j++] = aux;
        }else{
            x[j++] = 0;
        }
    }
    for(i=0; i<j-1; i++){
        printf("%d ",x[i]);
    }
    printf("%d",x[j-1]);
}

int main(){
    int v[10000], n, i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    fita_colorida(v,n);
}