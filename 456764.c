#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, n2;
    double resultado=0;
    scanf("%d", &n1);
    scanf("%d", &n2);
    resultado = n1;
    resultado = resultado / n2;
    printf("%.2lf\n",resultado);
    return 0;
}