#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n;

    cin >> t;

    for(int i=0; i<t; i++){
        cin >> n;

        if(n % 2 == 0){
            for(int j=n-2; j>0; j--){
                cout << j << " ";
            }
        }else{
            for(int j=n-5; j>0; j--){
                cout << j << " ";
            }
            for(int j=n-4; j<=n-2; j++){
                cout << j << " ";
            }
        }
        
        cout << n-1 << " " << n << "\n";
    }

    

    return 0;
}