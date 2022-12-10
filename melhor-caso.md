1. Seja T(n) a complexidade de tempo para os melhores casos

```
n = número total de elementos
```

2. Então T(n) = 2*T(n/2) + constante * n

```
2*T(n/2) = dividindo o array em dois arrays de tamanho igual
constante*n = percorrendo elementos da matriz em cada nível da árvore
```

3. Além disso, dividiremos o arrai em uma matriz de tamanho igual para
   T(n) = 2 _ (2 _ T(n/4) + constante * n/2) + constante*n == 4 _ T(n/4) + 2 _ constante\ \* n

```
Podemos dizer que
T(n) = 2^k * T(n/(2^k)) + k * constante * n
n = 2^k
k = log2(n)
Portanto, T(n) = n * T(1) + n * logn = O(n * log2(n))
```
