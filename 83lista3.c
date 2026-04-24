#include <stdio.h>

int main() 
{
    float numeros[20];
    int i;

    printf("Digite 20 numeros:\n");

    for (i = 0; i < 20; i++) 
    {
        printf("Numero %d: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("\nNumeros na ordem inversa:\n");

    for (i = 19; i >= 0; i--) 
    {
        printf("%.2f ", numeros[i]);
    }

    printf("\n");

    return 0;
}