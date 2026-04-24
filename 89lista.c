#include <stdio.h>

int main() {
    float V1[15];
    float V2[15];
    int i;
    int contagem = 0;

    printf("Preencha o vetor V1 (15 numeros):\n");
    for (i = 0; i < 15; i++) 
    {
        printf("V1[%d]: ", i);
        scanf("%f", &V1[i]);
    }

    printf("\nPreencha o vetor V2 (15 numeros):\n");
    for (i = 0; i < 15; i++) 
    {
        printf("V2[%d]: ", i);
        scanf("%f", &V2[i]);
    }

    for (i = 0; i < 15; i++) 
    {
        if (V1[i] == V2[i]) {
            contagem++;
        }
    }

    printf("Quantidade de vezes que possuem o mesmo\n");
    printf("numero na mesma posicao: %d\n", contagem);

    return 0;
}