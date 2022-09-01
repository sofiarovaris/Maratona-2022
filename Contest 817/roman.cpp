#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int soma = 0;
        for(int i=0; i<s.length(); i++){
            if(s[i] == 'I'){
                if((i+1) != s.length()){
                    if(s[i+1] == 'V'){
                        i++;
                        soma += 4;
                    }else if(s[i+1] == 'X'){
                        i++;
                        soma += 9;
                    }else{
                        soma += 1;
                    }
                }else{
                    soma += 1;
                }
            }else if (s[i] == 'V'){
                soma += 5;
            }else if(s[i] == 'X'){
                if((i+1) != s.length()){
                    if(s[i+1] == 'L'){
                        i++;
                        soma += 40;
                    }else if(s[i+1] == 'C'){
                        i++;
                        soma += 90;
                    }else{
                        soma += 10;
                    }
                }else{
                    soma += 10;
                }
            }else if(s[i] == 'L'){
                soma += 50;
            }else if(s[i] == 'C'){
                if((i+1) != s.length()){
                    if(s[i+1] == 'D'){
                        i++;
                        soma += 400;
                    }else if(s[i+1] == 'M'){
                        i++;
                        soma += 900;
                    }else{
                        soma += 100;
                    }
                }else{
                    soma += 100;
                }
            }else if(s[i] == 'D'){
                soma += 500;
            }else{
                soma += 1000;
            }
        }
        cout << soma;
        return 0;
}
        