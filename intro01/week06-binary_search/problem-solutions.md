**cf978c:**
Basicamente é necessário realizar um Prefix Sum em O(n) do vetor inteiro, depois realizar uma busca binária de cada valor nesse vetor de soma. A ideia é salvar todos os valores de M (média = r+l) quando for buscar à direita, pois ao final (quando não tiver mais nada), teremos o maior valor não maior que o m. Por fim, basta retornar a posição desse quarto, e para quantificar as salas dele de fato (um dos requisitos do output), pegamos a diferença entre ele e o anterior.

**cf2148d:**
O problema é composto por duas partes, primeira é somar TODOS os pares (se nós ligarmos algum ímpar) e depois escolher qual impar utilizar para ligar e qual para desligar. Assim sendo, se não houver nenhum ímpar, basicamente a máquina nunca será ligada, tendo a soma = 0.
Caso exista, vamos somar todos os pares, e depois vamos para a segunda parte do problema, que é saber qual a melhor escolha para os ímpares em Ligar e Desligar. 
A melhor escolha será Ligar sempre com o maior ímpar (contabilizando ele na soma) e desligando no menor ímpar, fazendo um two pointers logo após ordenar os ímpares.

**cf812C:**
Esse problema já é de nível médio e exige uma busca binária sobre as respostas.
Inicialmente, temos um vetor [c_1, c_2, ..., c_n], deve-se calcular como será o vetor de custos para cada i itens (i=1, i=2, ... i=k).
Assim, nossos vetores com os valores reais (considerando a fórmula passada no exercício) será:
r' = [r'_1, r'_2, ..., r'_n] para i=1.
r'' = [r''_1, r''_2, ..., r''_n] para i=2... 
E assim até chegar em i=k

Depois, para cada vetor atualizado, devemos achar qual é a soma dos k itens (poderia usar prefix sum tb), já que são os valores atualizados, devemos somar e ver qual é o menor valor possível.
Para isso, ordena-se cada vetor r, depois calcula a soma acumulada até o valor k e retorna:
sum(k) = r'_1 + r'_2 + ... + r'_k => Depois retorna sum(k)

Assim, agora vamos analisar se para aquele valor de k que escolhemos, sum(k) é MAIOR ou MENOR que nosso orçamento S. Aí entra a busca binária por uma razão específica:
Monotonicidade, isto é, se ele consegue levar k=5 itens, então significa que obviamente consegue levar k=4 itens. Porém, se não consegue levar k=9 itens, então não consegue levar k=10 itens.

Portanto, basta aplicar uma busca binária nesse vetor até achar o k ideal, note que se sum(k) < Orçamento (s), podemos salvar o valor dessa quantidade de itens, e quanto r < l, esse valor será o melhor.