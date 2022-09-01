#include <bits/stdc++.h>

using namespace std;

int beauty(char letra, string palavra, int k){
    int cont_max = 0, cont_letra = 0, cont_aux = 0, max = 0;
    char letra_atual;
    for(int i=0; i<palavra.length(); i++){
        letra_atual = palavra[i];
        while(palavra[i] == letra){
            cont_max++;
            if(cont_max == palavra.length()){
                return palavra.size();
            }
            i++;
        }
        while(palavra[i] != letra){
            cont_aux++;
            cont_max++;
            if(cont_max == palavra.length()){
                return palavra.size();
            }
            if((cont_aux == k) && (palavra[i+1] == letra)){
                break;
            }else{
                cont_max = 0;
                cont_aux = 0;
            } 
            i++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k;
    string palavra;
    cin >> n >> k;
    cin >> palavra;

    cout << beauty('a', palavra, k) << endl;

    //ver o maximo de dois
    //cout << max(beauty('a', palavra), beauty('b', palavra)) << endl;
    return 0;
}