#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int v, n, total, temp;
    double percentual;

    cin >> v >> n;

    total = v * n;

    for(int i=1; i<9; i++){
        percentual = total * (i/10.0);
        temp = ceil(percentual);
        cout << temp << " ";
    }
    percentual = total * (9/10.0);
    temp = ceil(percentual);
    cout << temp << "\n";

    return 0;
}