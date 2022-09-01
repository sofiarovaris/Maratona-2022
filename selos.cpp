#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int cont=0;
    
    cin >> n;
    for(int i=2; i<=sqrt(n); i++){
        if(n % i == 0){
            cont=1;
            break;
        }
    }   
    if(cont == 0){
        cout << "N\n";
    }else{
        cout << "S\n";
    }

    return 0;
}