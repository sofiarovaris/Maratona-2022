#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int i=0; i<n; i++){
        int inteiro;
        double a, b, c, d, aux_n, aux_d, aux;

        std::cin >> a >> b >> c >> d;

        if( (a/b) == (c/d) ){ //tudo igual
            std::cout << 0 << std::endl;
        }else if(a == c || b == d){
            std::cout << 1 << std::endl;
        }else{ //os dois sao diferentes
            if(a == 0 || c == 0){
                std::cout << 1 << std::endl;
            }else{
                aux_n = b * c;
                aux_d = a * d;
                if((aux_n == 1) || (aux_d == 1)){
                    std::cout << 1 << std::endl;
                }else{
                    if(aux_n > aux_d){
                        aux = aux_n / aux_d;
                    }else{
                        aux = aux_d / aux_n;
                    }
                    inteiro = aux;
                    if(aux == inteiro){
                        std::cout << 1 << std::endl;
                    }else{
                        std::cout << 2 << std::endl;
                    }
                }
            }
        }
    }

    return 0;
}