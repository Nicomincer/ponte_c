#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int preferencia;
    int quantidade;
    int teste=1;
    int c=1;
    printf("Quantos você quer? ");
    scanf("%d", &quantidade);
    printf("Você quer a piramide normal, ou invertida?[1][2]: ");
    scanf("%d", &preferencia);
    if(preferencia == 1){
        for(int c=1; c<=quantidade; c++){
            printf("\n");
            for(int b=1; b<=c; b++){
                printf("*");
            }
        }
    }
    else{
        while(teste<=quantidade){
            for(c=teste; c<quantidade; c++){
                printf(" ");
            }
            for(int b=quantidade-teste+1; b<=quantidade; b++){
                printf("*");
            }
            printf("\n");
            teste+=1;
        }
    }

    return 0;
}