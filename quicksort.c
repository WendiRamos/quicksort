#include <stdio.h>

void trocarValores(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int particionar(int vetor[], int indiceInicio, int indiceFinal)
{
    int pivo = vetor[indiceFinal];
    int i = indiceInicio - 1;
    int j;

    for (j = indiceInicio; j < indiceFinal; j++)
    {
        if (vetor[j] <= pivo)
        {
            i++;
            trocarValores(&vetor[i], &vetor[j]);
        }
    }
    trocarValores(&vetor[i + 1], &vetor[indiceFinal]);
    return (i + 1);
}

void quickSortRec(int vetor[], int indiceInicio, int indiceFinal)
{
    if (indiceInicio < indiceFinal)
    {
        int indicePivo = particionar(vetor, indiceInicio, indiceFinal);
        quickSortRec(vetor, indiceInicio, indicePivo - 1);
        quickSortRec(vetor, indicePivo + 1, indiceFinal);
    }
}

void quickSort(int vetor[], int tamanho)
{
    quickSortRec(vetor, 0, tamanho - 1);
}

void exibirVetor(int vetor[], int tamanho)
{
    int i;
    for (i = 0; i < tamanho; i++)
    {
        printf("%d\t", vetor[i]);
    }
    printf("\n");
}

int main()
{
    int vetorMelhor[] = {1, 5, 3, 6, 7, 2, 8, 4};
    int tamanhoMelhor = sizeof(vetorMelhor) / sizeof(vetorMelhor[0]);

    int vetorMedio[] = {4, 3, 1, 7, 2, 8, 5, 6};
    int tamanhoMedio = sizeof(vetorMedio) / sizeof(vetorMedio[0]);

    int vetorPior[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int tamanhoPior = sizeof(vetorPior) / sizeof(vetorPior[0]);

    printf("Melhor Caso - Entrada:\n");
    exibirVetor(vetorMelhor, tamanhoMelhor);
    quickSort(vetorMelhor, tamanhoMelhor);
    printf("Melhor Caso - Saida:\n");
    exibirVetor(vetorMelhor, tamanhoMelhor);
    printf("\n");
    printf("\n");

    printf("Medio Caso - Entrada:\n");
    exibirVetor(vetorMedio, tamanhoMedio);
    quickSort(vetorMedio, tamanhoMedio);
    printf("Medio Caso - Saida:\n");
    exibirVetor(vetorMedio, tamanhoMedio);
    printf("\n");
    printf("\n");
    
    printf("Pior Caso - Entrada:\n");
    exibirVetor(vetorPior, tamanhoPior);
    quickSort(vetorPior, tamanhoPior);
    printf("Pior Caso - Saida:\n");
    exibirVetor(vetorPior, tamanhoPior);

    return 0;
}
