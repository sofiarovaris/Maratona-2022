#include <stdio.h>
#define max 16

int main(){
    int n, i, j, k, cont = 0, erro = 0;
    char v[max], lixo;
    scanf("%d",&n);
    for(i=0; i<max; i++){
        scanf("%c", &lixo);
        while(lixo == '\n'){
            scanf("%c", &lixo);
        }
        if(lixo != '\n'){
            v[i] = lixo;
        }
    }
    for(i=0; i<max; i++){
        cont = 0;
        for(j=i; j<max; j++){
            if(v[i] != '.' && v[i] == v[j]){
                cont = cont + 1;
            }
            if(n*2 < cont){
                erro = -1;
                break;
            }
        }
    }

    if(erro == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}