#include <stdio.h>

int main() 
{
    float vetor[20];
    float novoVetor[20];
    float numeroProcurado;
    int i, j = 0;
    int encontrado = 0;

    printf("Digite 20 numeros:\n");
    for (i = 0; i < 20; i++) 
    {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nDigite um numero para verificar e remover: ");
    scanf("%f", &numeroProcurado);

    for (i = 0; i < 20; i++) 
    {
        if (vetor[i] == numeroProcurado) {
            encontrado = 1;
        } else {
            novoVetor[j] = vetor[i];
            j++;
        }
    }

    if (encontrado) 
    {
        printf("O numero %.2f existia no vetor e foi removido.\n", numeroProcurado);
        printf("Novo vetor (com %d elementos):\n", j);
        for (i = 0; i < j; i++) {
            printf("%.2f ", novoVetor[i]);
        }
        printf("\n");
    } else {
        printf("\nO numero %.2f nao existe no vetor. Nenhuma alteracao feita.\n", numeroProcurado);
    }

    return 0;
}