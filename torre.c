#include <stdio.h>

int main(){
    int n, conta=0, i, j, l[1000], c[1000], max=0, v[1000][1000];
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            l[i] = 0;
            c[j] = 0;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &v[i][j]);
            l[i] = l[i] + v[i][j];
            c[j] = c[j] + v[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            conta = l[i] + c[j] - 2*v[i][j];
            if(conta > max){
                max = conta;
            }
        }
    }
    printf("%d\n", max);
    return 0;
}