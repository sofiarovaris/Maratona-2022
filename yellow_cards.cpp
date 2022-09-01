#include <bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //entrada;
    map<int, int> times[2];
    int total_cartoes_jogo;

    //auxiliares
    int index=0, max, min;

    //posicao zero => qtd de jogadores
    //posicao um => qtd de cartoes amarelos
    cin >> times[0][0] >> times[1][0] >> times[0][1] >> times[1][1] >> total_cartoes_jogo;

    if(times[0][1] >= times[1][1]){
        index = 1;
    }

    int temp = total_cartoes_jogo - (times[index][0] * times[index][1]);

    if(temp == 0){ //quer dizer que todos os cartoes do jogo foram aplicados neste time
        max = times[index][0];
    }else if(temp < 0){ //quer dizer que todos os jogadores expulsos sao deste time, porem nao foi a quantidade exata
        //max = (temp / times[index][1]) + total_cartoes_jogo;
        max = total_cartoes_jogo / times[index][1];
    }else{ //falta expulsar os do outro time
        max = times[index][0] + (temp / times[!index][1]);
    }

    temp = total_cartoes_jogo - (times[!index][0] * (times[!index][1] - 1));
    
    if(temp <= 0){ //quer dizer que nenhum jogador precisou ser expulso
        min = 0;
    }else {
        temp = temp - (times[index][0] * (times[index][1] - 1));
        if(temp <= 0){
            min = 0;
        }else{ //começar a expulsar
            min = temp;
        }
    }

    cout << min << " " << max << "\n";

    return 0;
}