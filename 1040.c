#include <stdio.h>
#include <stdlib.h>

int main(){
    double n1,n2,n3,n4,exame;
    double media = 0, media_final=0;
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    if(media>=7){
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");
    }else if(media<5){
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");
    }else{
        scanf("%lf",&exame);
        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");
        printf("Nota do exame: %.1lf\n",exame);
        media_final = (exame + media)/2;
        if(media_final>=5){
            printf("Aluno aprovado.\n");
        }else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf\n",media_final);
    }
    
    return 0;
}