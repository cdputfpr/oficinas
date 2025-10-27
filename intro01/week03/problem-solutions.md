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

**cf617a**
Bruta sempre removendo o maior possivel (5) e caso nao der, remove sempre o maior restante. Esta solucao eh O(n).
Ou, simplesmente, printa o numero dividido por 5 teto, i.e., (num+4)/5. Esta solucao eh O(1).
