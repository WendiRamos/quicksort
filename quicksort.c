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
    int vetor[] = {5, 2, 3, 4, 1, 6, 9, 7, 0, 8};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);

    printf("Antes do QuickSort:\n");
    exibirVetor(vetor, tamanho);

    quickSort(vetor, tamanho);

    printf("Depois do QuickSort:\n");
    exibirVetor(vetor, tamanho);

    return 0;
}
