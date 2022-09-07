#include <bits/stdc++.h>
using namespace std;
#define ll long long

int max_letras(int n, int k, char aux, string palavra){
    ll index_troca = 0, max = 0, cont = 0, trocas = k;

    for(ll i=0; i<n; i++){
        cout << "for i = " << i << "\n";
        if(aux == palavra[i]){
            cout << "letras iguais " << aux << "\n";
            cont++;
        }else{ //se nao, quer dizer que trocou
            cout << "letras diferentes " << palavra[i] << "\n";
            if(trocas != 0){
                cout << "ainda da pra trocar " << trocas << "\n";
                cont++;
                trocas--;
                cout << "novos valores " << cont << " " << trocas << "\n";
            }else{
                if(max < cont){
                    max = cont;
                }
                cont = 0;
                trocas = k;
                cout << "acabou! max " << max << " cont " << cont << " trocas " << trocas; 
            }
        }
    }

    if(max < cont){
        max = cont;
    }
    return max;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n, k;
    string palavra;
    cin >> n >> k;
    cin >> palavra;

    cout << max_letras(n, k, 'a', palavra) << "\n";
    cout << "----------------------------------\n\n";
    cout << max_letras(n, k, 'b', palavra) << "\n";

    //cout << max(max_letras(n, k, 'a', palavra), max_letras(n, k, 'b', palavra)) << "\n";

    return 0;
}