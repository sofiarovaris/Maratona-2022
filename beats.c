#include <stdio.h>
#define max 4

int main(){
    int n, i, j, k, cont = 0;
    char v[max][max], lixo;
    scanf("%d",&n);
    for(i=0; i<max; i++){
        for(j=0; j<max; j++){
            scanf("%c", &lixo);
            while(lixo == '\n'){
                scanf("%c", &lixo);
            }
            if(lixo != '\n'){
                v[i][j] = lixo;
            }
        }
    }
    for(i=0; i<max; i++){
        for(j=0; j<max; j++){
            printf("[%c] ", v[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<max; i++){ //linha
        for(j=0; j<max; j++){ //coluna
            for(k=j+1; k<max; k++){ //coluna + 1
                if(v[i][j] != '.' && v[i][j] == v[i][k]){
                    cont = cont + 1;
                }
            }
            if(n < cont){
                printf("sou menor\n");
                cont = -1;
                break;
            }else{
                cont = 0;
            }
        }
    }

    if(cont == -1){
        printf("NO\n");
    }else{
        printf("YES\n");
    }

    return 0;
}