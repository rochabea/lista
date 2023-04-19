#include <stdio.h>
#include <conio.h>

int main() { 
int i;
float valores[10],quadrado[10];

//armazenar os valores do vetor e calcular o quadrado 
    for(int i=0;i<10;i++){
        printf("Informe um valor real:\n");
        scanf("%f",&valores[i]);
        quadrado[i]=valores[i]*valores[i];
        printf("%.1f e o seu quadrado e: %.1f\n",valores[i],quadrado[i]);
}

    //mostrar qual foi o primeiro conjunto de vetores armazenado
    printf("\n");
    printf("O valor dos conjuntos reais que foi armazenado no conjunto foi: ");

    for (i = 0; i <10; i++)
    {
        printf("%4.1f, ", valores[i]);
    }

    //mostar qual foi o segundo conjunto de vetores armazenado, o conjunto de quadrados
    printf("\n");
    printf("O valor do quadrado dos valores inseridos no conjunti e");

    for (i = 0; i < 10; i++)
    {
        printf("%4.1f ", quadrado[i]);
    }
    return 0;
}