#include <bits/stdc++.h>
using namespace std;
#define ll long long

int max_letras(int n, int k, char aux, string palavra){
    ll index_troca = 0, max = 0, cont = 0, trocas = k;

    for(ll i=0; i<n; i++){
        //cout << "for i = " << i << "\n";
        int j = i;
        while( j<n && (aux == palavra[j] || trocas != 0)){
            if(aux == palavra[j]){
                //cout << "letras iguais " << aux << "\n";
                cont++;
            }else{ //se nao, quer dizer que trocou
                //cout << "letras diferentes " << palavra[j] << "\n";
                //cout << "ainda da pra trocar " << trocas << "\n";
                cont++;
                trocas--;
                //cout << "novos valores " << cont << " " << trocas << "\n";
            }
            j++;
        }
        if(max < cont){
            max = cont;
        }
        cont = 0;
        trocas = k;
        //cout << "acabou! max " << max << " cont " << cont << " trocas " << trocas; 
    }

    /*if(max < cont){
        max = cont;
    }*/
    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    string palavra;
    cin >> n >> k;
    cin >> palavra;

    cout << max(max_letras(n, k, 'a', palavra), max_letras(n, k, 'b', palavra)) << "\n";

    return 0;
}