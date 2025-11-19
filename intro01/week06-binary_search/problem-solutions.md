**cf978c:**
Basicamente é necessário realizar um Prefix Sum em O(n) do vetor inteiro, depois realizar uma busca binária de cada valor nesse vetor de soma. A ideia é salvar todos os valores de M (média = r+l) quando for buscar à direita, pois ao final (quando não tiver mais nada), teremos o maior valor não maior que o m. Por fim, basta retornar a posição desse quarto, e para quantificar as salas dele de fato (um dos requisitos do output), pegamos a diferença entre ele e o anterior.

**cf2148d:**
O problema é composto por duas partes, primeira é somar TODOS os pares (se nós ligarmos algum ímpar) e depois escolher qual impar utilizar para ligar e qual para desligar. Assim sendo, se não houver nenhum ímpar, basicamente a máquina nunca será ligada, tendo a soma = 0.
Caso exista, vamos somar todos os pares, e depois vamos para a segunda parte do problema, que é saber qual a melhor escolha para os ímpares em Ligar e Desligar. 
A melhor escolha será Ligar sempre com o maior ímpar (contabilizando ele na soma) e desligando no menor ímpar, fazendo um two pointers logo após ordenar os ímpares.