1. T(n) = complexidade de tempo total para o pior caso

```
n = número total de elementos
T(n) = T(n-1) + constante\*n
```

2. Como estamos dividindo a matriz em duas partes, uma consiste em um único elemento e outra em n-1
   e vamos percorrer arrays individuais

```
T(n) = T(n-2) + constante*(n-1) + constante*n = T(n-2) + 2*constante*n - constante
T(n) = T(n-3) + 3*constante*n - 2*constante - constante
T(n) = T(n-k) + k*constante*n - (k-1)*constante ..... - 2\*constante - constante

T(n) = T(n-k) + k*constante*n - constante*[(k-1) .... + 3 + 2 + 1]
T(n) = T(n-k) + k*n*constante - constante*[k*(k-1)/2]
colocar n=k
T(n) = T(0) + constante*n*n - constante*[n*(n-1)/2]
```

3. Removendo termos constantes

```
T(n) = n*n - n*(n-1)/2
Portanto, T(n) = O(n^2)
```
