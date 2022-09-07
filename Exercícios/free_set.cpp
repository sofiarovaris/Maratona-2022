#include <algorithm>
#include <iostream>

// tempo excedido

int main(){
    int n, k, i, cont=0, aux=0, inicio=0;
    std::cin >> n >> k;
    int v[n], a[n];
    for(i=0; i<n; i++){
        std::cin >> v[i];
    }
    //orderna o vetor
    std::sort(v, v + n);

    for(i=0; i<n; i++){
        if ( v[i]%k != 0 ){
            a[cont] = v[i];
            cont++;
        }else if(std::binary_search(a, a + cont, v[i]/k)==0){
            a[cont] = v[i];
            cont++;
        }
    }
    std::cout << cont;

    return 0;
}