#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int n, temp, cont=0, max=-1, index=-1;
    cin >> n;

    vector<int> votos;
    votos.reserve(n);

    for(int i=0; i<n; i++){
        cin >> votos[i];
    }

    sort(votos.begin(), votos.end());

    for(int i=0; i<n-1; i++){
        if(votos[i] == votos[i+1]){
            cont++;
            index = i+1;
        }else{
            if(cont > max){
                max = cont;
            }
            cont = 0;
        }
    }

    cout << votos[index];


    return 0;
}