**cf2091b**
Vamos iterar no aluno a_i do maior pro menor. Inicialmente a_i vai ser alocado em uma equipe sozinho. Se essa equipe já é forte, podemos adicioná-la a resposta e começar uma equipe nova. Caso contrário, incrementamos o tamanho da equipe e vamos para a próxima iteração. Podemos verificar rapidamente se a equipe atual é forte ou não comparando com x o produto de a_i com o tamanho da equipe atual, já que em cada iteração a_i deve ser o aluno com menor habilidade no grupo.

**cf2149b**
Podemos ordenar o array e definir os pares como os vizinhos no array ordenado. A resposta será a distância do maior par.
