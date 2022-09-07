#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll T, cont;
    string s, t, maior, menor;

    cin >> T;

    while(T != 0){
        cin >> s >> t;
        cont = 0;

        if(s.length() >= t.length()){
            maior = s;
            menor = t;
        }else{
            maior = t;
            menor = s;
        }

        int i, j;

        for(i=0, j=0; i<maior.length(); i++){
            if(menor[j] != maior[i]){
                cont++;
            }else{
                j++;
            }
        }

        if(j != menor.length()){ //quer dizer que nao consumiu toda a palavra
            cont = cont 
        }

        T--;
    }


    return 0;
}