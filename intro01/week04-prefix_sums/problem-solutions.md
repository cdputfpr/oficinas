**cf961b**
Bruta em qual janela acordar. Somamos todos os pontos do array em que Mishka está acordado com os pontos da janela em que ele está dormindo. Isso pode ser computado eficientemente por um prefix sum dos pontos em que ele está dormindo, ou uma janela deslizante.

**cf2123c**
Faz o vetor de prefixos de mínimo e sufixos de máximo. Para cada i, a[i] pode se juntar ao prefixo i-1 ou o sufixo i+1, para cada uma dessas opções pode se juntar
por máximo ou mínimo do outro intervalo não considerado. Apenas bruta essas 4 opções e vê se algum fica igual ao valor original.

**cf1807d:**
Em cada query, a soma final do array será a soma de 1 até l-1, mais (r-l+1)* k mais a soma de r+1 até n. Isso pode ser calculado rapidamente com prefix sum.

**cf1615b:**
A solução consiste em fazermos 20 prefix sums, um para cada bit da representação binária do valor máximo de r. o prefix sum i na posição j conta quantos elementos no array de 1 até j tem o bit i = 0. Assim, para cada caso de teste, podemos iterar sobre os bits e guardar a menor contagem naquele intervalo que foi passado, essa será a resposta.

**cf1469b:**
A ideia eh fazer um prefix sum do vetor n e do vetor m. A resposta sera a soma do maior valor em cada um dos respectivos prefix sums. Isso gera a resposta pois estamos pegar a maior soma possivel de cada um dos vetores.
