#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n, carlos, max = -1, temp;

    cin >> n;

    for(int i=0; i<n; i++){
        cin >> temp;
        if(i==0){
            carlos = temp;
        }
        if(temp > max){
            max = temp;
        }
    }
    if(max == carlos){
        cout << "S\n";
    }else{
        cout << "N\n";
    }
    return 0;
}