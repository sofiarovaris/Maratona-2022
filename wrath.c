#include <stdio.h>

typedef struct k{
    int vivo;
    int qtd;
}killer;

void mata(killer *v, int n, int pos){
    int i;
    for(i=pos-1; i>n - v[pos].qtd; i--){
        v[i].vivo = -1;
    }
}

int conta_vivos(killer *v, int n){
    int i, cont=0;
    for(i=n-1; i>=0; i--){
        mata(v, n, i);
    }
    for(i=0; i<n; i++){
        if(v[i].vivo != -1){
            cont++;
        }
    }
    return cont;
}

int main(){
    int i, n;
    scanf("%d", &n);
    killer v[n];
    for(i=0; i<n; i++){
        scanf("%d", &v[i].qtd);
        v[i].vivo = 0;
    }
    printf("%d\n", conta_vivos(&v,n));
    return 0;
}