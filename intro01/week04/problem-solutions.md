**cf961b**
Bruta em qual janela acordar. Somamos todos os pontos do array em que Mishka está acordado com os pontos da janela em que ele está dormindo. Isso pode ser computado eficientemente por um prefix sum dos pontos em que ele está dormindo, ou uma janela deslizante.

**cf2123c**
Faz o vetor de prefixos de mínimo e sufixos de máximo. Para cada i, a[i] pode se juntar ao prefixo i-1 ou o sufixo i+1, para cada uma dessas opções pode se juntar 
por máximo ou mínimo do outro intervalo não considerado. Apenas bruta essas 4 opções e vê se algum fica igual ao valor original.
