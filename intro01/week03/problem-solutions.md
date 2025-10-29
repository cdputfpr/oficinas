**cf1582c**
Bruta qual letra pode remover. Para cada uma, itera com dois ponteiros começando das extremidades da string:
- Se forem caracteres iguais, ok;
- Senão, se puder remover um, remove;
- Senão, é impossível chegar num palíndromo com esta escolha.

REJEITADO **cf2112a**
Bruta para todos os pontos entre 1 e 100. Para cada uma, verifica se a distância para x e para y é menor que a distância correspondente para a Alice

**cf2060a**
Bruta para todos os valores entre -100 e 100, intuitivo de pensar pois esses valores são restritos nos valores da soma de fibonacci no array original.
Para cada uma, verifica qual é o fibonacciness de cada array com o valor em a3

**cf271a**
Bruta incrementando o ano até encontrar um com todos os dígitos distintos. Para cada ano, converte em string e verifica se len(set(ano)) == 4. O primeiro que satisfaz é a resposta.

**cf229a**
Bruta qual coluna será transformada em '1's. Em cada linha, deslocamos sempre o '1' mais próximo para a coluna desejada. Para obter qual é o '1' mais próximo de modo eficiente, podemos, por exemplo, iterar com two pointers duas vezes sobre cada linha, uma para obter o mais próximo à esquerda e outra para o mais próximo à direita, guardando qual foi o último '1' encontrado.
