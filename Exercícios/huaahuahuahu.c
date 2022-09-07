#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palindromo(int j, char aux[]){
    int i;
    for(i=0; i<j; i++){
        if(aux[i]!=aux[j-i]){
            return 1;
        }
    }
    return 0;
}

int main(){
    char palavra[51], aux[51], aocontrario[51];
    int i, j=0;
    scanf("%s",&palavra);
    for(i = 0; palavra[i] != '\0'; i++) {
        if(palavra[i]=='a' || palavra[i]=='e' || palavra[i]=='i' || palavra[i]=='o' || palavra[i]=='u'){
            aux[j] = palavra[i];
            j++;
        }
    }
    aux[j]='\0';
    j--;
    if(palindromo(j, aux)==1){
        printf("N\n");
    }else{
        printf("S\n");
    }
    return 0;
}