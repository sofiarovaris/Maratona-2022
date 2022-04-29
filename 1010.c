#include <stdio.h>
#include <stdlib.h>

int main(){
    int id, qtd;
    double valor, valor_total = 0;
    scanf("%d %d %lf", &id, &qtd, &valor);
    valor_total = qtd * valor;
    scanf("%d %d %lf", &id, &qtd, &valor);
    valor_total = valor_total + (qtd * valor);
    printf("VALOR A PAGAR: R$ %.2lf\n",valor_total);
    return 0;
}