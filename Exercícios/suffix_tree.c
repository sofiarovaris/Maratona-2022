#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
    int n, i=0, j, k, l;
    char palavra[1001], aux[6];
    scanf("%d",&n);
    
    while(i<n){
        k=5;
        l=0;
        scanf("%s", palavra);
        int tam = strlen(palavra);
        palavra[tam+1] = '\0';
        for(j = 0; palavra[j] != '\0'; j++) {
            if(palavra[j+k]=='\0'){
                aux[l] = palavra[j];
                k--;
                l++;
            }
        }
        aux[l]='\0';
        if(strcmp(aux,"mnida")==0){
            printf("KOREAN\n");
        }else{
            if(l>4){
                for(j = 0; aux[j] != '\0'; j++) {
                    aux[j] = aux[j+1];
                }
            }
            if(strcmp(aux,"desu")==0 || strcmp(aux,"masu")==0){
                printf("JAPANESE\n");
            }else{
                printf("FILIPINO\n");
            }
        }
        i++;
    }
    return 0;
}