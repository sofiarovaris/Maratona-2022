#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, x, y, cont=1, index=0;
    cin >> n;
    vector<pair<int, int> > consultas;
    consultas.reserve(n);

    for(int i=0; i<n; i++){
        cin >> x >> y;
        consultas.push_back(make_pair(x, y));
    }
    sort(consultas.begin(), consultas.end());

    for(int i=0; i<n-1; i++){
        if(consultas[index].second <= consultas[i+1].first){
            cont++;
            index = i+1;
        }
    }

    cout << cont << "\n";

    return 0;
}