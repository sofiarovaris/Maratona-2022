#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    set<char> nome;
    nome.insert('T');
    nome.insert('i');
    nome.insert('m');
    nome.insert('u');
    nome.insert('r');
    cin >> t;
    while(t > 0) {
        cin >> n;
        vector<char> entrada;
        entrada.reserve(n);
        char c;
        vector<char>::iterator it;
        for(int i=0; i < n; i++) {
            cin >> c;
            entrada.push_back(c);
        }
        if(n == 5) {
            for(it = entrada.begin(); it != entrada.end(); it++) {
                if(nome.find(*it) != nome.end()) {
                    nome.erase(*it);
                } else {
                    cout << "NO\n";
                }
            }
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        t--;
    }

    return 0;
}