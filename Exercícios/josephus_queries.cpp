#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int q, k, n, temp;

    cin >> q;

    for(int i=0; i<q; i++){
        cin >> n >> k;
        temp = n / 2;
        if(temp >= k){
            cout << k*2 << "\n";
        }else{ //se passar disso
            int sobra = k - temp;
            if(k == n){
                cout << 1 << "\n";
            }else if(n % 2 == 0){
                cout << ((sobra+1)*2) - 1 << "\n";
            }else{
                cout << (sobra*2) - 1 << "\n";
            }
        }
    }

    return 0;
}