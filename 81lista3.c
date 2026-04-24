#include <stdio.h>

int main() 

{
    float Q[20];
    float menor;
    int posicao = 0;
    int i;

    printf("Digite 20 numeros positivos:\n");

    for (i = 0; i < 20; i++)
    {
        do {
            printf("Elemento %d: ", i + 1);
            scanf("%f", &Q[i]);

            if (Q[i] <= 0) {
                printf("Erro! Digite um numero positivo.\n");
            }
        } while (Q[i] <= 0);
    }

    menor = Q[0];
    posicao = 1;

    for (i = 1; i < 20; i++) 
    {
        if (Q[i] < menor) {
            menor = Q[i];
            posicao = i + 1;
        }
    }

    printf("O MENOR elemento digitado foi: %.2f\n", menor);
    printf("Ele esta na posicao: %d\n", posicao);

    return 0;
}