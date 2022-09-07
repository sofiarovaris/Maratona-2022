#include <stdio.h>

int main(){
    int n, i=0, cont=0;
    char gabarito[100], resposta[100];
    scanf("%d",&n);
    scanf("%s",gabarito);
    scanf("%s",resposta);
    while (i!=n){
        if(gabarito[i]==resposta[i]){
            cont++;
        }
        i++;
    }

    printf("%d\n",cont);
    return 0;
}