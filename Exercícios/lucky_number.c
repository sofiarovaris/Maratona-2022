#include <stdio.h>
//pedir ajuda pra vic :)
int main(){
	long long int n, aux=0, cont=0;
	scanf("%lld",&n);
	
    while(n>0){
        aux = n%10;
        n = n/10;
        if(aux==4 || aux==7){
            cont++;
        }
    }
    if(cont==4 || cont==7){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
	
	return 0;
}