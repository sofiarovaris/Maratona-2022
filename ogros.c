#include <stdio.h>

typedef struct no{
    int escala;
    int pontos;
}comp;

int buscaBinaria (int x, int n, comp v[]) { 
   int e = -1, d = n; // atenção!
   while (e < d-1) {  
      int m = (e + d)/2;
      if (v[m].escala <= x) e = m;
      else d = m; 
   }
   return d;
}

int main(){
    int n, m, i, lixo;
    scanf("%d %d", &n, &m); //n de faixas e n de ogros
    int o[m];
    comp regras[n];
    regras[0].escala = 0;
    for(i=1; i<n; i++){
        scanf("%d", &regras[i].escala);
    }
    for(i=0; i<n; i++){
        scanf("%d", &regras[i].pontos);
    }
    for(i=0; i<m; i++){
        scanf("%d", &lixo);
        o[i] = buscaBinaria(lixo, n, regras);
    }

    for(i=0; i<m; i++){
        printf("%d ", regras[o[i]-1].pontos);
    }

    return 0;
}