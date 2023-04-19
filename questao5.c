#include <stdio.h>

int main(){
    int vetor[10],i, par=0, contador=0;
    
    //pedir para que o usuario informe o valor
    for (i = 0; i < 10; i++)
    {
        printf("Informe o valor: ");
        scanf("%d", &vetor[i]);
    }

    //saber quais sao os numeros pares
    for (i = 0; i < 10; i++)
    {
        if (vetor[i]%2==0)
        {
            contador = contador+1;
            printf("\nEsse valor e par %d", vetor[i]);
        }
    }

    //escrever a quantidade de numeros pares que tem no vetor
    printf("\nA quantidade de numeros pares desse vetor e %d", contador);

}