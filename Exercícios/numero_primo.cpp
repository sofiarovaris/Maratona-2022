#include <bits/stdc++.h>

using namespace std;

int64_t is_primo(int64_t n, int64_t d) {
    if(d > 1) {
        int64_t a = !(n%d);
        //cout << "Divisao por " << d << ": " << a << endl;
        if(a) {
            if(d != n && d != 1) {
                return 0;
            }
        }
        return is_primo(n, d-1);
    }
    return 1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int64_t x, n, p;
    cin >> x;
    while(x > 0) {
        cin >> n;
        p = is_primo(n, 9);
        if(!p){
            cout << n << " nao eh primo\n";
        } else {
            cout << n << " eh primo\n";
        }
        x--;
    }
    return 0;
}
