#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);  
    while(n!=0){
        int i=0,a=0,b=1,aux=0;
        while (i!=n){
            aux = a + b;
            a = b;
            b = aux;
            i++;
        }
        printf("%d\n",b);
        scanf("%d", &n);  
    }
    return 0;
}