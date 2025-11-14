**cf609a**
Escolhemos sempre o maior drive até que a soma seja >= m.

**cf2149b**
Podemos ordenar o array e definir os pares como os vizinhos no array ordenado. A resposta será a distância do maior par.

**cf2091b**
Vamos iterar no aluno a_i do maior pro menor. Inicialmente a_i vai ser alocado em uma equipe sozinho. Se essa equipe já é forte, podemos adicioná-la a resposta e começar uma equipe nova. Caso contrário, incrementamos o tamanho da equipe e vamos para a próxima iteração. Podemos verificar rapidamente se a equipe atual é forte ou não comparando com x o produto de a_i com o tamanho da equipe atual, já que em cada iteração a_i deve ser o aluno com menor habilidade no grupo.

**cf1849b**
Nenhum monstro morre até que todos tenham vida <= k. Nesse ponto, cada monstro terá vida restante k, se a é divisível por k, ou a mod k, caso contrário. Devemos então ordenar os monstros em ordem decrescente de vida restante, e, em caso de empate, crescente de índice. Um modo de fazer isso é ordenar os pares (-(a_i % k == 0 ? k : a_i % k), i).

**cf433b**
Podemos criar dois vetores de prefix sum, onde um sera construido com o vetor original do exercicio e o outro sera construido apos ordenarmos o vetor original. Dessa forma, verificamos o tipo da questao que o exercicio pede e printamos o respectivo prefix sum no intervalo fornecido

**cf102961j**
Ordenamos as moedas em ordem crescente e iteramos. Quando encontrarmos uma moeda maior que 1 + a soma das anteriores, temos que a resposta é 1 + a soma das anteriores. Caso não encontremos, a resposta é 1 + a soma de todas as moedas.
