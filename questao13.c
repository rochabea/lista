#include <stdio.h>
#include<stdlib.h>

int main(){
    int vetor[5];
    int i;

    //para o usuario inserir o 5 valores do vetor 
    for (i = 0; i < 5; i++)
    {
        printf("Insira o valor: ");
        scanf("%d", &vetor[i]);
    }

    int maiorValor = vetor[0];
    int posicaoMaior = 0;
    int menorValor = vetor[0];
    int posicaoMenor = 0;

    //para encontrar o maior e o menor valor e as posições deles
    for (i = 0; i < 5; i++)
    {
        if (vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
            posicaoMaior = i;
        }

        if (vetor[i] < menorValor)
        {
            menorValor = vetor[i];
            posicaoMenor = i;
        } 
    }

    //mostrar os resultados
    printf("\nOs valores inseridos foram: ");
    for (i = 0; i < 5; i++)
    {
        printf("\n%d", vetor[i]);
    }

    printf("\nMaior valor foi %d e se encontra na posicao %d", maiorValor, posicaoMaior);
    printf("\nMenor valor foi %d e se encontra na posicao %d", menorValor, posicaoMenor);

    return 0; 
    
    
    
}