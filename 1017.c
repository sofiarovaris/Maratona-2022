#include <stdio.h>
#include <stdlib.h>
#define KMH 12

int main(){
    int velocidade_media, hrs;
    float distancia = 0;
    scanf("%d", &hrs);
    scanf("%d", &velocidade_media);
    distancia = velocidade_media*hrs;
    distancia = distancia / KMH;
    printf("%.3f\n",distancia);
    return 0;
}