#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n, c, t, temp, first=0, second=0, max=0, n1, n2;
    vector<int> pipocas_normal, pipocas_contrario;

    cin >> n >> c >> t;
    pipocas_normal.reserve(ceil(n/2.0));
    pipocas_contrario.reserve(ceil(n/2.0));

    if(n % 2 ==0){
        for(int i=0; i<n; i++){
            cin >> temp;
            if(i%2 == 0){
                first = temp;
            }else{
                pipocas_normal.push_back(temp+first);
            }
        }
        max = *max_element(pipocas_normal.begin(), pipocas_normal.end());
    }else{
        for(int i=0; i<n; i++){
            cin >> temp;
            if(i%2 == 0){
                first = temp;
                pipocas_contrario.push_back(second+temp);
            }else{
                second = temp;
                pipocas_normal.push_back(temp+first);
            }
        }
        n1 = *max_element(pipocas_contrario.begin(), pipocas_contrario.end());
        n2 = *max_element(pipocas_normal.begin(), pipocas_normal.end());
        if(n1 > n2){
            max = n2;
        }else{
            max = n1;
        }
    }

    cout << ceil(max/)    

    return 0;
}

/*#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll int n, total_pipocas=0, temp, qtd_pipocas, max=0, aux;
    vector<int> pipocas;
    double c, t;
    cin >> n >> c >> t;
    pipocas.reserve(n);

    for(int i=0; i<n; i++){
        cin >> temp;
        pipocas.push_back(temp);
        total_pipocas += temp;
    }

    qtd_pipocas = ceil(total_pipocas / c);
    temp = 0;
    for(int i=0; i<n; i++){
        if(temp <= qtd_pipocas){
            temp += pipocas[i];
            if(i == n-1){
                aux = ceil(temp / t);
                if(aux > max){
                    max = aux;
                }
            }
        }else{
            aux = ceil(temp / t);
            if(aux > max){
                max = aux;
            }
            temp = 0;
        }
    }

    cout << max << "\n";





    return 0;
}*/