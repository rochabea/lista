#include <stdio.h>
#include <conio.h>


int main(){
    float  vetor[15], media, resultado;
    int i;

    for (i = 0; i < 15; i++)
    {
        //vai pedir o valor da nota 15 vezes para o usuario
        printf("Insira a nota da avaliacao: ");
        scanf("%f", &vetor[i]);

        resultado = resultado + vetor[i];
    }
    //aqui faz o calculo da media 
    media = resultado/15;
    printf("a sua media e %.1f", media);
    return 0;
}