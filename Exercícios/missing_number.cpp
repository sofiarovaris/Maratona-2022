#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n, temp;
    cin >> n;
    vector<ll int> numeros;
    numeros.reserve(n);

    for(int i=0; i<n - 1; i++){
        cin >> temp;
        numeros.push_back(temp);
    }

    sort(numeros.begin(), numeros.end());
    int index = -1;
    for(int i=0; i<n; i++){
        if(numeros[i] != (i+1)){
            index = i+1;
            break;
        }
    }

    cout << index << "\n";    

    return 0;
}