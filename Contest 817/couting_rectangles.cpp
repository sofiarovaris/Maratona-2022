#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    uint64_t t, n, q, a, b, c, d, soma;
    cin >> t;

    while(t > 0){
        cin >> n >> q;
        vector<pair<uint64_t, uint64_t> > retangulos;
        retangulos.reserve(n);
        vector<pair<uint64_t, uint64_t> >::iterator it;

        for(uint64_t i=0; i<n; i++){
            cin >> a >> b;
            retangulos.push_back(make_pair(a, b));
        }

        sort(retangulos.begin(), retangulos.end());

        for(uint64_t i=0; i<q; i++){
            soma = 0;
            cin >> a >> b >> c >> d;
            it = upper_bound(retangulos.begin(), retangulos.end(), a);
            for(uint64_t j = it - retangulos.begin(); j<n; j++){ //para cada retangulo
                if(a <= retangulos[j].first && c <= retangulos[j].first){
                    break;
                }
                if((a < retangulos[j].first && retangulos[j].first < c) && (b < retangulos[j].second && retangulos[j].second < d)){
                    soma += (retangulos[j].first * retangulos[j].second);
                }
            }
            cout << soma << "\n";
        }
        t--;
    }

    return 0;
}