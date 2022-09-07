#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, a;
    set<int> numeros;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        numeros.insert(a);
    }
    cout << numeros.size();
    return 0;
}