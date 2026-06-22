**cf1197c:**
É um problema Stars and Bars (Barras e Estrelas)
A ideia é calcular as diferenças pares, ou seja, (a_n - a_n-1), e salvar essas diferenças em um vetor para poder encontrar qual foi o salto, ou seja, quais são as k-1 maiores diferenças. Assim, pela propriedade da subtração

[2, 5, 10], a diferença entre 10 e 2 é 8 = (10 - 5) + (5 - 2)

Logo, tanto faz os valores intermediários ou salvar índices de onde ocorrem esses saltos, basta ordenar decrescente e depois pegar os k-1 diferenças e subtrair da soma de custos.
Eu fiz a soma de custos no input, então no final é feita a subtração.

**cf23a:**

Resumindo, é encontrar o tamanho da maior substring que se repete em uma string. É um problema que envolve mais funções de string do que lógicas complexas em si, valendo a pena passar o método substr (inicio , tamanho) e o significado de npos, apesar de que dá para simplesmente brutar todas as possibilidades. salva a subtring e faz um for procurando ela novamente um índice a frente, desde que comece com tamanho máximo da string e vai reduzindo 1 a 1.


**cf1006c:**

Problema simples de two pointers, tal que a soma esquerda deve ser igual a soma direita, dai conta qual é a soma máxima que pode ser igual tanto para a esquerda, quanto para a direita.


**cf600b:**  
Em suma, deve-se ordenar o vetor para descobrir a quantidade da valores que são menores que o comparado, fazendo um lower bound.


**cf645a:** 

A ideia é verificar se a sequência horária/anti-horária de uma tabela é POSSUI a sequência da outra, para isso, deve-se duplicar uma das strings e fazer um find. 