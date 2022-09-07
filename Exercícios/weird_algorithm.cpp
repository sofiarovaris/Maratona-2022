#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n;
    cin >> n;
    cout << n << " ";
    while(n > 1){
        if(n%2 == 0){
            n = n / 2;
            cout << n << " ";
        }else{
            n = (n * 3) + 1;
            cout << n << " ";
        }
    }
    cout << "\n";

    return 0;
}