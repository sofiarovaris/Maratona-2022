#include <stdio.h>

int main(){
    int i, j, k=0, n, l1, c1, l2, c2, vzs, cenouras=0;
    scanf("%d",&n);
    int v[n+1][n+1];
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            scanf("%d",&v[i][j]);
        }
    }
    scanf("%d",&vzs);
    while(k<vzs){
        scanf("%d %d %d %d", &l1, &c1, &l2, &c2);
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if( (i>=l1 && j>=c1) && (i<=l2 && j<=c2) ){
                    cenouras = cenouras + v[i][j];
                    v[i][j] = 0;
                }
            }
        }
        k++;
    }
    printf("%d\n",cenouras);
    return 0;
}