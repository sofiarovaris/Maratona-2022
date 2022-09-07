#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int cont=1, max=0;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1]){
            cont++;
        }else{
            if(cont > max){
                max = cont;
            }
            cont = 1;
        }
    }
    cout << max << "\n";

    return 0;
}