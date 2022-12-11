# QUICKSORT 

O algoritmo QuickSort é um método de ordenação muito rápido e eficiente, inventado por Charles Antony Richard Hoare, em 1960. O quicksort adota a estratégia de divisão e conquista. 
A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas de chaves menores e maiores, recursivamente até que a lista completa se encontre ordenada. 


# COMPLEXIDADE DE TEMPO EM QUICKSORT 

* Melhor Caso:

O melhor caso de QuickSort é quando selecionamos o pivô como um elemento médio, nesse caso a recursão ficará como mostra o diagrama abaixo:

![Melhor Caso - Diagrama](/imagens/melhor-caso.png)

No diagrama a altura da arvore é logN e em cada nível estaremos percorrendo todos os elementos com o total de operação de logN * N, pois selecionamos o elemento médio, então a matriz será dividida em ramos de tamanho igual, para que a altura da arvore seja mínima, com isso a complexidade de tempo será O(N*log(N)).  

* Médio Caso:

O caso médio de complexidade no QuickSort é baseado nos cálculos da imagem abaixo:

![Médio Caso - Diagrama](/imagens/medio-caso.png)

Os cálculos da imagem são baseados na média das outras complexidades(Melhor e Pior Caso).

* Pior Caso:

O pior caso acontecerá quando nossa matriz for classificada e selecionarmos o menor ou o maior elemento indexado como pivô, como mostra o diagrama abaixo:

![Pior Caso - Diagrama](/imagens/pior-caso.png)
Como podemos ver no diagrama, estamos selecionando o pivô como elemento de índice de canto, então a altura da arvore será N e no nó superior estará fazendo N operações, então N-1 e assim por diante até 1, com isso a complexidade de tempo será O(N^2). 

# COMPARAÇÃO COM OUTROS ALGORITMOS DE ORDENAÇÃO 

| ALGORITMO  | COMPLEXIDADE DO PIOR CASO | COMPLEXIDADE DO CASO MÉDIO | COMPLEXIDADE DO MELHOR CASO |
|------------|---------------------------|----------------------------|-----------------------------|
| BubbleSort | O(n^2)                    | O(n^2)                     | O(n^2)                      |
| HeapSort   | O(n * log(n))             | O(n * log(n))              | O(n * log(n))               |
| MergeSort  | O(n * log(n))             | O(n * log(n))              | O(n * log(n))               |
| QuickSort  | O(n^2)                    | O(n * log(n))              | O(n * log(n))               |
 
 # CÓDIGO DO ALGORITMO

Na função abaixo temos o código responsável por trocar os valores de duas posições do vetor.
![Função trocaValores - Diagrama](/imagens/troca-valores.png)

A função particionar é responsável por percorrer o vetor até encontrar os números que vão trocar de lugares entre si, fazendo com que um lado do pivô fique com números menores que ele, e do outro lado números maiores.
![Função particionar - Diagrama](/imagens/particionar.png)

A função quickSortRec é responsável ?????
![Função quickSortRec - Diagrama](/imagens/quicksort-rec.png)

A função quicksort é uma função auxiliar/facilitadora, responsável pela conversão do dados e chamada da função quickSortRec, ou seja, ela pega os dados necessários e converte para os paramentros da função quickSortRec.
![Função quickSort - Diagrama](/imagens/quickSort.png)

A função exibirVetor é responsável por percorrer todo o vetor exibindo os valores.
![Função exibirVetor - Diagrama](/imagens/exibir-vetor.png)

??????
![Função int-main - Diagrama](/imagens/int-main.png)