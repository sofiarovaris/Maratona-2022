#include <stdio.h>

// tempo excedido

int busca_binaria(int vector[], int begin, int end, int item){
    /* Índice representando o meio do sub-vetor begin->end */
    int i = (begin + end) / 2;
    if (begin > end) {  /* Ponto de parada. Item não está no vetor */
        return -1;
    }
    if (vector[i] == item) {  /* Item encontrado */
        return i;
    }
    if (vector[i] < item) {  /* Item está no sub-vetor à direita */
        return busca_binaria(vector, i + 1, end, item);
    } else {  /* vector[i] > item. Item está no sub-vetor à esquerda */
        return busca_binaria(vector, begin, i - 1, item);
    }
} 

void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;         
    for(i=esq+1;i<=dir;i++){        
        j = i;                      
        if(vet[j] < vet[pivo]){     
            ch = vet[j];               
            while(j > pivo){           
                vet[j] = vet[j-1];      
                j--;                    
            }
            vet[j] = ch;               
            pivo++;                    
        }
    }
    if(pivo-1 >= esq){              
        quick(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){              
        quick(vet,pivo+1,dir);      
    }
 }

int main(){
    int n, k, i, cont=0, aux;
    scanf("%d %d", &n, &k);
    int v[n], a[n];
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }
    //orderna o vetor
    quick(v, 0, n-1);
    for(i=0; i<n; i++){
        if(( (v[i]%k==0) && (busca_binaria(a,0,cont-1,v[i]/k)==-1) ) || (v[i]%k!=0)){
            a[cont] = v[i];
            cont++;
        }
    }
    printf("%d\n", cont);

    return 0;
}