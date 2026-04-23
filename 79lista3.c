#include <stdio.h>

int main()
{
    int n[20];
    int soma = 0, alunos_acima = 0;
    float media;

    for(int i = 0; i < 20; i++)
    {
        printf("Digite a nota do aluno [%d]: ", i + 1);
        scanf("%d", &n[i]);
        soma = soma + n[i];
    }

    media = soma / 20;

    for(int i = 0; i < 20; i++)
    {
        if (n[i] > media)
        {
            alunos_acima++;
        }
    }

    printf("\nA media foi de: %.2f\n", media);   
    printf("O numero de alunos com nota acima da media e: %d\n", alunos_acima);

    return 0;
}