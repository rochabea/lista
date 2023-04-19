#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main () {
    int C[10], i=0, menor, maior;
    menor= INT_MAX;
    maior= INT_MIN;

    //usuario insere no vetor o valoor desejado, 10 posições
    //um if para detectar o maior e o menor valor dos que o usuário inseriu 
    for(i; i<10; i++){
        printf("escreva um numero\n");
        scanf("%d", &C[i]);
        if(menor>C[i]){
            menor= C[i];    
        }
        if(maior<C[i]){
            maior=C[i];
        }
    }
    //vai ser mostrado pro usuário qual foi o menor e o maior valor inserido por ele
    printf(" o menor e %d\n", menor);
    printf("o maior e %d\n", maior);
    
    system("pause");
    return 0;
}