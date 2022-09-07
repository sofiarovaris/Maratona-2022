#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    int dia, mes, ano;
    scanf("%d", &idade);
    ano = idade/365;
    idade = idade - ano*365;
    mes = idade/30;
    idade = idade - mes*30;
    dia = idade;
   
    printf("%d ano(s)\n",ano);
    printf("%d mes(es)\n",mes);
    printf("%d dia(s)\n",dia);
    return 0;
}