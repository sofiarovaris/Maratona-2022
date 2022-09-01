#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    int cont, vzs;
    cin >> vzs;

    while(vzs > 0){
        cin >> n;
        cont = 0;
        for(int i=2; i<=(n/2); i++){
            if(n % i == 0){
                cont=1;
                break;
            }
        }
        if(cont == 0){
            cout << n << " eh primo\n";
        }else{
            cout << n << " nao eh primo\n";
        }
        vzs--;
    }

    

    return 0;
}