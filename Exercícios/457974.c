#include <stdio.h>
#include <stdlib.h>

int main(){
    int max=0, i=0, n;
    scanf("%d",&n);
    while (n!=0){
        if(n>max){
            max = n;
        }
        scanf("%d",&n);
    }
    printf("%d\n",max);
    
    return 0;
}