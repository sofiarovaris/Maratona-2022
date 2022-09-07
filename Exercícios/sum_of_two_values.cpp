#include <bits/stdc++.h>

using namespace std;

bool compare (pair<int, int> x, pair<int, int> y){
    return x.first < y.first;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, soma, lixo, numero_complementar, index_comp;
    vector<pair<int, int> > numeros;
    cin >> n >> soma;
    numeros.reserve(n);
    for(int i=0; i<n; i++){
        cin >> lixo;
        numeros[i] = {lixo, i};
    }
    sort(numeros.begin(), numeros.end());
    for(int i=0; i<n; i++){
        numero_complementar = soma - numeros[i].first;
        if(binary_search(numeros.begin(), numeros.end(), make_pair(numero_complementar, -1), compare)){
            cout << i << " " << index_comp << "\n";
            return 0;
        }
    }

    cout << "IMPOSSIBLE\n";
        

    return 0;
}