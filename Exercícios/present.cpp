#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll int n, m, w, temp;

    cin >> n >> m >> w;

    vector<ll int> plantas;
    plantas.reserve(n);

    for(ll int i=0; i<n; i++){
        cin >> temp;
        plantas.push_back(temp);
    }

    ll int proximo_elemento, index_troca;
    vector<ll int>::iterator up;

    sort(plantas.begin(), plantas.end());

    for(int i=0; i<m; i++){
        index_troca = -1;

        if(w < plantas.size()){
            proximo_elemento = plantas[w];
        }
        for(int j=0; j<w; j++){
            plantas[j]++;
            if(w < plantas.size() && index_troca == -1){
                cout << "tentando " << proximo_elemento << "\n";
                if(plantas[j] > proximo_elemento){
                    cout << "encontrei alguem maior que o proximo_elemento " << plantas[j] << " na posicao " << j << "\n";
                    up = upper_bound(plantas.begin(), plantas.end(), proximo_elemento);
                    index_troca = distance(plantas.begin(), up);
                    cout << "diferenca entre o proximo elemento mais alto " << index_troca << "\n";
                    int aux = plantas[j];
                    plantas[j] = plantas[index_troca-1];
                    plantas[index_troca-1] = aux;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout << plantas[i] << " ";
        }
        cout << "\n";
    }

    

    cout << plantas[0] << "\n";

    return 0;
}