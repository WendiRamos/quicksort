1. Permite que T(n) seja o tempo total gasto. Para a média consideraremos o elemento aleatório como pivô, permite que o índice seja o pivô, então a complexidade do tempo será:

```
T(n) = T(i) + T(n-i)
T(n) = 1/n [\sum{i=1}^{n-1} T(i)] + 1/n_[\sum_{i=1}^{n-1} T(n-i )]
```

2. Como [\sum_{i=1}^{n-1} T(i)] e [\sum_{i=1}^{n-1} T(n-i)] funções prováveis ​​iguais
Portanto T(n) = 2/n\*[\sum_{i=1}^{n-1} T(i)]. Multiplique ambos os lados por n
```
n*T(n) = 2*[\sum_{i=1}^{n-1} T(i)] ............(1)
```
3. Colocar n = n-1
```
(n-1)T(n-1) = 2[\sum_{i=1}^{n-2} T(i)] ............(2)
```

4. Subtrair 1 e 2
```
n*T(n) - (n-1)T(n-1) = 2*T(n-1) + c*n^2 + c(n-1)^2
n*T(n) = T(n-1)[2+n-1] + 2*c*n - c
n*T(n) = T(n-1)*(n+1) + 2*c*n [c removido porque era constante]
```


5. Divida ambos os lados por n * (n+1)
```
 T(n)/(n+1) = T(n-1)/n + 2*c/(n+1) .............(3)

Colocar n = n-1,
T(n-1)/n = T(n-2)/(n-1) + 2\*c/n ............(4)

Colocar n = n-2,
T(n-2)/n = T(n-3)/(n-2) + 2\*c/(n-1) ............(5)

Colocando 4 em 3 e depois 3 em 2 teremos
T(n)/(n+1) = T(n-2)/(n-1) + 2*c/(n-1) + 2*c/n + 2\*c/(n+1)

também podemos encontrar a equação para T(n-2) colocando n = n-2 em (3)

Vamos conseguir

T(n)/(n+1) = T(1)/2 + 2*c * [1/(n-1) + 1/n + 1/(n+1) + .....]

T(n)/(n+1) = T(1)/2 + 2*c*log(n) + C

T(n) = 2*c*log(n) \* (n+1)

Agora, removendo constantes,

T(n) = log(n)\*(n+1)

Portanto, T(n) = O(n\*log(n))

````
