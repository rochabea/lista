#include <stdio.h>
#define n 62 

int main(){
    int vetor[n], i;

    for ( i = 0; i < 6; i++)
    {
        do
        {
        //vai ler o valor par 
        printf("Insira um valor par: ", i+1);
        scanf("%d", &vetor[i]);
        
        }while (vetor[i] %2 != 0 );
        //o programa ira rodar ate ter 6 numeros pares, o valor impar sera ignorado
    }
    
    for ( i = 6; i >= 0; i--)
    {
        //apresentar de forma decrescente os valores informados
        printf("\n%d", vetor[i]);
    }
return 0;
}