#include <stdio.h>
#define n 6

int main(){
    int vetor[n], i;

    //um for para o usuario colocar o valor dentro do vetor, 6 valores
    for (i = 0; i < 6 ; i++)
    {
        printf("Insira o valor: ", i+1);
        scanf("%d", &vetor[i]);
    }

    //um for pra mostra de forma decrescente 
    for (i = 5; i >= 0; i--)
    {
        printf("%d ", vetor[i]);
    }
    
}