#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, b, temp;

    cin >> n >> b;

    while((n!=0) && (b!=0)){
        bool possivel = false;
        set<int> bolas[b];
        set<int> numeros[n+1];
        
        for(int i=0; i<b; i++){
            cin >> temp;
            bolas->insert(temp);
        }

        numeros->insert(0);
        numeros->insert(n);
        if(b == (n+1)){
            possivel = true;
            goto finish;
        }else if((bolas->find(0) == bolas->end()) && (bolas->find(n) == bolas->end())){
            goto finish;
        }else if(b <= round((n / 2.0))){
            goto finish;
        }
        for(set<int>::iterator it = bolas->begin(); it!=bolas->end(); it++){
            for(set<int>::iterator jt = it; jt!=bolas->end(); jt++){
                temp = fabs(*it - *jt);
                numeros->insert(temp);
                if(numeros->size() == n+1){
                    possivel = true;
                    goto finish;
                }
            }
        }

        finish:
        if(possivel){
            cout << "Y\n";
        }else{
            cout << "N\n";
        }

        cin >> n >> b;
    }


    return 0;
}