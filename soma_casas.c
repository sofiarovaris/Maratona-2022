#include <stdio.h>
#include <stdlib.h>

int busca_binaria(int vector[], int begin, int end, int item){
    int i = (begin + end) / 2;

    if (begin > end) {
        return -1;
    }

    if (vector[i] == item) {
        return i;
    }

    if (vector[i] < item) {
        return busca_binaria(vector, i + 1, end, item);

    } else {  // vector[i] > item
        return busca_binaria(vector, begin, i - 1, item);
    }
}

int main(){
    int n, k, i, aux=0;
    scanf("%d",&n);
    int *v;
    v = malloc(n * sizeof (int));
    for(i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&k);

    for(i=0; i<n; i++){
        aux = k - v[i];
        if(busca_binaria(v,0,n,aux) != -1){
            printf("%d %d\n", v[i], aux);
            break;
        }
    }

    free(v);
    
    return 0;
}