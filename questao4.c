#include <stdio.h>

int main(){
    int vetor[8], soma, i;

    //pede para que o usuário insira o valor para um vetor 
    for (i = 0; i < 8; i++)
    {
        printf("Insira o valor do vetor: ");
        scanf("%d", &vetor[i]);
        //printf("%4d\n", vetor[i]);
    }

    for (i = 0; i < 8; i++)
    {
        printf("%4d", vetor[i]);
    }
    
    
    //soma dos valores da posição
    soma = vetor[0] + vetor[4];
    printf("\nO valor da soma e %d", soma);
}