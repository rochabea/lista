#include <stdio.h>
#include <stdlib.h>

/*escreve um porgrama que leia 10 números inteiros e os aramzena em um vetor. Imprima o vetor, o maior elemento e a posição em que ele se encontra*/
int main()
{
    int n = 4; // total
    int C[10];
    printf("[%d de %d] Numero: ", 1,n);
    if( scanf("%d", &C[0]) !=1 ) return -1; 
    int maior = C[0];
    int menor = maior;

    for (int i=1; i<n; i+=1)
    {
        printf("[%d de %d] Numero: ", 1+i, n);
        if (scanf("%d", &C[i]) != 1) return -1;
        if (menor > C[i]) menor = C[i];
            else if (maior < C[i]) maior = C[i];
    }

    printf("\
o menor e %d\n\
o maior e %d\n",
        menor, maior);
    return 0;
}