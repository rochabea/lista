#include <stdio.h>

int main(){
    int A[6];
    int i;

    //usuário coloca os valores 
    for (i = 0; i < 6; i++)
    {
        printf("Insira um valor: ");
        scanf("%d", &A[i]);
        printf("\n");
        
    }

    //os valores serão apresentados na tela 
    for (i = 0; i < 6; i++)
    {
        printf("%4d", A[i]);
    }
    return 0;
}