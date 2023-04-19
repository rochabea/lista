#include <stdio.h>

int main(){
    int vetor[10],results=0, contador=0;

    for (int i = 0; i < 10; i++)
    
    {
//ira pedir que o usuário coloque 10 valores, positivo ou negativo
    printf("Entre com os valores: ");
    scanf("%d", &vetor[i]);
        if (vetor[i] > 0)
        {
            results = results + vetor[i];
        }
        if (vetor[i]<0)
        {
            contador = contador + 1;
        }
        

    }
    //quantidade de numeros negativos 
    printf("\nQuantidade de numeros negativos %d", contador);
    //soma dos numeros positivos 
    printf("\n O resultado dos numeros positivos %d", results);
    
    

}