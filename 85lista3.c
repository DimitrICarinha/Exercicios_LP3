#include <stdio.h>

#define M 5

int main()
{
    float temp[M];
    float maior, menor, soma = 0, media;

    for(int i = 0; i < M; i++)
    {
        scanf("%f", &temp[i]);
    }

    maior = temp[0];
    menor = temp[0];

    for(int i = 0; i < M; i++)
    {
        if(temp[i] > maior)
            maior = temp[i];
        if(temp[i] < menor)
            menor = temp[i];
            
        soma += temp[i];
    }

    media = soma / M;

    printf("O maior e: %.2f\nO menor e: %.2f\nA soma e: %.2f\nA media e: %.2f", maior, menor, soma, media);

    return 0;
}