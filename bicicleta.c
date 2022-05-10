#include <stdio.h>

int main(){
    int i, n, lixo;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d %d", &lixo, &lixo);
    }
    printf("%d\n", ( (n - 4) / 2 ) );
    return 0;
}