# QUICKSORT 

O algoritmo QuickSort é um método de ordenação muito rápido e eficiente, inventado por Charles Antony Richard Hoare, em 1960. O QuickSort adota a estratégia de divisão e conquista.
A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida, o QuickSort ordena as duas sublistas de chaves menores e maiores, recursivamente até que a lista completa se encontre ordenada.


# COMPLEXIDADE DE TEMPO EM QUICKSORT 

* Melhor Caso:

O melhor caso de QuickSort é quando selecionamos o pivô como um elemento médio, nesse caso a recursão ficará como mostra o diagrama abaixo:

![Melhor Caso - Diagrama](/imagens/melhor-caso.png)

No diagrama a altura da árvore é logN e em cada nível estaremos percorrendo todos os elementos com o total de operação de logN * N, pois selecionamos o elemento médio, então a matriz será dividida em ramos de tamanho igual, para que a altura da árvore seja mínima, com isso a complexidade de tempo será O(N*log(N)). 

* Médio Caso:

O caso médio de complexidade no QuickSort é baseado nos cálculos da imagem abaixo:

![Médio Caso - Diagrama](/imagens/medio-caso.png)

Os cálculos da imagem são baseados na média das outras complexidades(Melhor e Pior Caso).

* Pior Caso:

O pior caso acontecerá quando nossa matriz for classificada e selecionarmos o menor ou o maior elemento indexado como pivô, como mostra o diagrama abaixo:

![Pior Caso - Diagrama](/imagens/pior-caso.png)
Como podemos ver no diagrama, estamos selecionando o pivô como elemento de índice de canto, então a altura da árvore será N e no nó superior estará fazendo N operações, então N-1 e assim por diante até 1, com isso a complexidade de tempo será O(N^2). 

# COMPARAÇÃO COM OUTROS ALGORITMOS DE ORDENAÇÃO 

| ALGORITMO  | COMPLEXIDADE DO PIOR CASO | COMPLEXIDADE DO CASO MÉDIO | COMPLEXIDADE DO MELHOR CASO |
|------------|---------------------------|----------------------------|-----------------------------|
| BubbleSort | O(n^2)                    | O(n^2)                     | O(n^2)                      |
| HeapSort   | O(n * log(n))             | O(n * log(n))              | O(n * log(n))               |
| MergeSort  | O(n * log(n))             | O(n * log(n))              | O(n * log(n))               |
| QuickSort  | O(n^2)                    | O(n * log(n))              | O(n * log(n))               |
 
 # CÓDIGO DO ALGORITMO

A função trocaValores é responsável por trocar os valores de duas posições do vetor.
![Função trocaValores - Diagrama](/imagens/troca-valores.png)

A função particionar usa o último elemento como pivô. Em seguida, verifica cada elemento e o troca antes do pivô se seu valor for menor.
No final do particionamento, todos os elementos menores que o pivô estão à esquerda dele e todos os elementos maiores que o pivô estão à direita dele. O pivô está em sua posição final classificada e a função retorna esta posição.
![Função particionar - Diagrama](/imagens/particionar.png)

A função quickSortRec recebe como parâmetros o array a ser ordenado, o primeiro e o último índice. Primeiro, verificamos os índices e continuamos apenas se ainda houver elementos a serem classificados. Obtemos o índice do pivô classificado e o usamos para chamar recursivamente o método particionar() com os mesmos parâmetros do método quickSortRec(), mas com índices diferentes.
![Função quickSortRec - Diagrama](/imagens/quicksort-rec.png)

A função quickSort serve apenas para facilitar a chamada do algoritmo de ordenação. Ela recebe apenas o vetor a ser ordenado e seu tamanho. É responsável por fazer a primeira chamada para a função quickSortRec (RECursiva), enviando os argumentos necessários para iniciar o algoritmo.
![Função quickSort - Diagrama](/imagens/quicksort.png)

A função exibirVetor é responsável por percorrer todo o vetor exibindo os valores.
![Função exibirVetor - Diagrama](/imagens/exibir-vetor.png)

A função main serve como ponto de partida para a execução do programa. Ela possui a chamada da função quickSort com seus parâmetros necessários.
![Função int-main - Diagrama](/imagens/int-main.png)