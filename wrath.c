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
        //printf("i:%d, v[i]:%d, aux:%d pos_mortos:%d\n", i, v[i], aux, pos_mortos);
        if(aux < pos_mortos){
            if(i < pos_mortos){
                vivos++;
                //printf("i<pos_mortos vivos:%d\n",vivos);
            }
            pos_mortos = aux;
            //printf("pos_mortos att:%d\n",pos_mortos);
        }
        
        //printf("-----------------------\n");
    }
    
    printf("%d\n", vivos);

    return 0;
}