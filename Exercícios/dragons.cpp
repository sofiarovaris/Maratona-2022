#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    //entradas
    int s, n, x, y, defeat_all=0;
    cin >> s >> n;
    vector<pair<int, int> > dragoes;
    dragoes.reserve(n);

    for(int i=0; i<n; i++){
        cin >> x >> y;
        dragoes.push_back(make_pair(x, y));
    }

    sort(dragoes.begin(), dragoes.end());

    for(int i=0; i<dragoes.size(); i++){
        if(s > dragoes[i].first){
            s = s + dragoes[i].second;
        }else{
            defeat_all = 1;
            break;
        }
    }

    if(defeat_all == 0){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }

    return 0;
}