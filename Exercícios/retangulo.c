#include <stdio.h>
#include <string.h>

int comb2(int n) {
    return 1 << n - 1;
}

int main(){
    int n, m, i, j, valor, total;

    scanf("%d %d",&n,&m);

    int linha[n], coluna[m];

    memset(linha, 0, n * sizeof(int));
    memset(coluna, 0, m * sizeof(int));

    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            scanf("%d", &valor);
            if(valor == 1){
                linha[i]++;
                coluna[j]++;
            }
        }
    }

    total = - (n * m);

    for (i = 0; i < n; i++) {
        total += comb2(linha[i]);
        total += comb2(m - linha[i]);
        /*if (linha[i] == m)
            total++;*/
    }

    for (i = 0; i < m; i++) {
        total += comb2(coluna[i]);
        total += comb2(n - coluna[i]);
        /*if (coluna[i] == n)
            total++;*/
    }

    printf("%d\n", total);
}