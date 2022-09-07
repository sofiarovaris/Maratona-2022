#include <stdio.h>

typedef struct medalhas{
    int id;
    int ouro;
    int prata;
    int bronze;
}med;

int main(){
    int i, n, m, v[3];
    scanf("%d %d", &n, &m);
    med pais[n];
    for(i=0; i<n; i++){
        pais[i].id = i+1;
        pais[i].ouro = pais[i].prata = pais[i].bronze = 0;
    }
    for(i=0; i<m; i++){
        scanf("%d %d %d", &v[0], &v[1], &v[2]);
        pais[v[0]-1].ouro++;
        pais[v[1]-1].prata++;
        pais[v[2]-1].bronze++;
    }
    for(i=0; i<n; i++){
        printf("%d %d %d %d\n", pais[i].id, pais[i].ouro, pais[i].prata, pais[i].bronze);
    }
    
    return 0;
}