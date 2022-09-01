#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    //cin.tie(0);

    int d, sumTime, x, y, temp, n, choose;
    cin >> d >> sumTime;
    vector<pair<int, int> > horarios;
    vector<int> estudos;
    horarios.reserve(d);
    estudos.reserve(d);

    n = d;
    for(int i=0; i<d; i++){
        cin >> x >> y;
        horarios.push_back(make_pair(x, y));
    }

    for(int i=0; i<n; i++, d--){
        temp = sumTime / d;
        if((horarios[i].first <= temp) && (temp <= horarios[i].second)){
            choose = temp;
        }else if(temp > horarios[i].second){
            choose = horarios[i].second;
        }else{
            choose = horarios[i].first;
        }
        estudos.push_back(choose);
        sumTime -= choose;
    }
    if(sumTime == 0){
        cout << "YES\n";
        for(int i=0; i<n; i++){
            if(i < n-1){
                cout << estudos[i] << " ";
            }else{
                cout << estudos[i] << "\n";
            }
        }
    }else{
        cout << "NO\n";
    }

    return 0;
}