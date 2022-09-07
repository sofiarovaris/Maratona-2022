#include <stdio.h>

void soma_cartas(int v[], int inicio, int fim, int *sereja, int *dima, int vez, int tam){
    if(vez != tam){
        if(v[inicio] > v[fim-1]){
            if((vez)%2 == 0){ //sereja
                *sereja = *sereja + v[inicio];
            }else{
                *dima = *dima + v[inicio];
            }
            soma_cartas(v, inicio+1, fim, sereja, dima, vez+1, tam);
        }else{
            if((vez)%2 == 0){ //dima
                *sereja = *sereja + v[fim-1];
            }else{
                *dima = *dima + v[fim-1];
            }
            soma_cartas(v, inicio, fim-1, sereja, dima, vez+1, tam);
        }
    }
}

int main(){
    int i, n, sereja=0, dima=0, vez=0;
    scanf("%d",&n);
    int v[n];
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    soma_cartas(v, 0, n, &sereja, &dima, vez, n);
    printf("%d %d", sereja, dima);
    return 0;
}