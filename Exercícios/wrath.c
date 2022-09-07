#include <stdio.h>

int main(){
    int n, i, vivos=0, aux;
    scanf("%d", &n);
    int v[n], pos_mortos = n;
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    for(i=n-1; i>=0; i--){ 
        aux = i - v[i];
        if(aux < pos_mortos){
            if(i < pos_mortos){
                vivos++;
            }
            pos_mortos = aux;
        }
    }
    
    printf("%d\n", vivos);

    return 0;
}