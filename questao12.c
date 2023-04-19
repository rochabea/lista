#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
    int vetor[5], i=0, menor, maior, media, resultado=0;
    menor= INT_MAX;
    maior= INT_MIN;

    //ler 5 valores que o usuario vai inserir 
    for(i=0 ; i<5; i++)
    {
        printf("escreva um numero\n");
        scanf("%d", &vetor[i]);
        resultado = resultado + vetor[i];
        printf("%d", resultado);

        

    }
    //media entre os valores inseridos
    media = resultado/5;
  for(i=0 ; i<5; i++)
    {
      //if para verificar qual e o maior e qual e o menor
      if(menor>vetor[i]){
            menor= vetor[i];    
        }
        if(maior<vetor[i]){
            maior=vetor[i];
        }
    }    
    

    printf(" o menor e %d\n", menor);
    printf("o maior e %d\n", maior);
    printf("a sua media e %.1i", media);


}