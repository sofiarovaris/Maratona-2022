#include <stdio.h>

int main(){
    int n, e, i, a = 0, b = 0;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        scanf("%d", &e);
        if(e==2){
            b = !b;
        }
        a = !a;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}