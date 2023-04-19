#include <stdio.h>
#include <stdlib.h>

int main(){
    int A[]= {1, 0, 5, -2, -5, 7};
    int soma;

    //(a) atribuir os valores da matriz no vetor 
    for (int i = 0; i < 6; i++)
    {
        printf("%4d", A[i]);
    }

    //(b)soma entre os valores das posições A[0], A[1] e A[5]
    soma = A[0] + A[1] + A[5];
    printf("\nA soma dos vetores A[0], A[1] e A[5] e %d", soma);
    printf("\n");

    //(c)trocar o valor do vetor na posição 4
    A[4] = 100;
    for (int i = 0; i < 6; i++)
    {
        printf("%4d", A[i]);
    }

    //(d) mostrar o valor de cada vetor em cada linha
    for (int i = 0; i < 6; i++)
    {
        printf("\n");
        printf("%4d", A[i]);
    }
    return 0;
}