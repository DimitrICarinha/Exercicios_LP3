#include <stdio.h>

int main()
{
    float A[10];
    float M[10];
    float X;
    int i;

    printf("Digite os 10 numeros do vetor A:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("A[%d]: ", i);
        scanf("%f", &A[i]);
    }

    printf("\nDigite o valor de X: ");
    scanf("%f", &X);

    for (i = 0; i < 10; i++) 
    {
        M[i] = A[i] * X;
    }

    printf("\nVetor M (Resultado de A * X):\n");
    for (i = 0; i < 10; i++) 
    {
        printf("%.2f ", M[i]);
    }
    printf("\n");

    return 0;
}