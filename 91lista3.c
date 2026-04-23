#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 50

int main()
{
    int vet[M];

    srand(time(NULL));
    printf("Vet: ");
    for(int i = 0; i < M; i++)
    {
        vet[i] = rand()%100;
        printf("%d, ",vet[i]);
    }

    for(int i = 0; i < M; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(vet[i] == vet[j] && i != j)
                {
                if (i > j){
                    break;
                }
                printf("%d repete na posicao %d\n", vet[i], j);
            }
        }
    }

    return 0;
}