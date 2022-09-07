#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i=0; i<t; i++){
        string exp;
        stack<char> pilha;
        char topo;
        bool ok = true;
        cin >> exp;
        for(int j=0; j<exp.length(); j++){
            if(exp[j] == '('){
                pilha.push(')');
            }else if(exp[j] == '{'){
                pilha.push('}');
            }else if(exp[j] == '['){
                pilha.push(']');
            }else{
                if(!pilha.empty()){
                    if(exp[j] == pilha.top()){
                        pilha.pop();
                    }else{
                        ok = false;
                        break;
                    }
                }else{
                    ok = false;
                    break;
                }
            }
        }
        if(!pilha.empty()){
            ok = false;
        }

        if(ok){
            cout << "S\n";
        }else{
            cout << "N\n";
        }
    }
    return 0;
}