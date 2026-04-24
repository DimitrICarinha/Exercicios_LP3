#include <stdio.h>

int main() 
{
    float vetor[30];
    float numeroProcurado;
    int i;
    int contagem = 0;

    printf("Digite 30 numeros:\n");
    for (i = 0; i < 30; i++) 
    {
        printf("Posicao %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nDigite o numero que deseja contar no vetor: ");
    scanf("%f", &numeroProcurado);

    for (i = 0; i < 30; i++) 
    {
        if (vetor[i] == numeroProcurado) {
            contagem++;
        }
    }

    printf("O numero %.2f aparece %d vezes no vetor.\n", numeroProcurado, contagem);

    return 0;
}