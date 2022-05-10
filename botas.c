#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Dados{
    int numero;
    char pe[2];
}dados;

int main(){
    int n, i=0, j, pares=0;
    scanf("%d",&n);
    dados v[n];
    while(i<n){
        scanf("%d %s",&v[i].numero, &v[i].pe);
        i++;
    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if( (v[i].numero == v[j].numero) && (strcmp(v[i].pe,v[j].pe)) && (v[i].numero!=-1) && (v[j].numero!=-1) ){
                pares = pares + 1;
                v[i].numero = -1;
                v[j].numero = -1;
                break;
            }
        }
    }
    printf("%d\n",pares);

    return 0;
}