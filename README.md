# QUICKSORT 

O algoritmo QuickSort é um método de ordenação muito rápido e eficiente, inventado por Charles Antony Richard Hoare, em 1960. O quicksort adota a estratégia de divisão e conquista. 
A estratégia consiste em rearranjar as chaves de modo que as chaves "menores" precedam as chaves "maiores". Em seguida o quicksort ordena as duas sublistas de chaves menores e maiores, recursivamente até que a lista completa se encontre ordenada. 


# COMPLEXIDADE DE TEMPO EM QUICKSORT 

* Melhor Caso:

O melhor caso de QuickSort é quando selecionamos o pivô como um elemento médio, nesse caso a recursão ficará como mostra o diagrama abaixo:

![Melhor Caso - Diagrama](/imagens/melhor-caso.png)

No diagrama a altura da arvore é logN e em cada nível estaremos percorrendo todos os elementos com o total de operação de logN * N, pois selecionamos o elemento médio, então a matriz será dividida em tamos de tamanho igual, para que a altura da arvore seja mínima, com isso a complexidade de tempo será O(N*log(N)).  

* Médio Caso:

* Pior Caso:

O pior caso acontecerá quando nossa matriz for classificada e selecionarmos o menor ou o maior elemento indexado como pivô, como mostra o diagrama abaixo:

![Pior Caso - Diagrama](/imagens/pior-caso.png)
Como podemos ver no diagrama, estamos selecionando o pivô como elementos de índice de canto, então a altura da arvore será N e no nó superior estará fazendo N operações, então N-1 e assim por diante até 1, com isso a complexidade de tempo será O(N^2). 

# COMPARAÇÃO COM OUTROS ALGORITMOS DE ORDENAÇÃO 

![Tabela Algoritmos](/imagens/tabela-comparacao.png)
 
 # CÓDIGO DO ALGORITMO
