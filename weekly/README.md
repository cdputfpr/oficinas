# Padrão

## Diretórios das oficinas
Os diretórios dessa sessão deverão ter a seguinte nomenclatura:

**./[mês][dia][ano][tipo]**

em que 
- **[mês]** é algum elemento do conjunto $U$, tal que
$U = \{jan, fev, mar, abr, mai, jun, jul, ago, set, out, nov, dez\}$
- **[dia]** é um número inteiro entre 01 e 31 (incluso) sempre com dois dígitos
- **[ano]** é um número inteiro do ano mod 100
- **[tipo]** é um elemento do conjunto $U = \{i, g\}$ tal que
    - $i$ é mapeado para contests introdutórios
    - $g$ é mapeado para contests gerais

**Exemplo:** ./out1425i é um contest que ocorreu no dia 14 de Outubro de 2025, e é um contest iniciante.

## Para dentro do diretório

Todos os diretórios de contests terão os seguintes arquivos:

### problem-codes.md
Arquivo onde terão todos os problemas do contest, escritos em linhas diferentes, sempre identando com alinhamento dos links e em sequência esperada para o contest real, da seguinte forma:

**\*\*[código_do_problema]:\*\* [link_do_problema]** \

Apenas para a última linha, o símbolo \\ não será escrito. Lembrar de deixar uma linha vazia ao final do arquivo.

**Exemplo:** \*\*cfr937d4a:\*\* https://codeforces.com/contest/1950/problem/A \

### problem-solutions.md
Arquivo onde terão as soluções escritas dos problemas do arquivo *problem-codes.md*. Os problemas devem estar em mesma ordem do outro arquivo e devem ter a seguinte forma:

```
\*\*[código_do_problema]:\*\* 

[solução_escrita]
```

### Diretório: solutions
Esse diretório é destinado para conter uma a duas soluções por problema da oficina.

Os arquivos de solução devem ter a seguinte nomenclatura:

**[código_do_problema]-[nome_de_quem_resolveu].cpp**

Lembremos de adequar as soluções para o nível do contest, ou seja, se o contest for introdutório, não utilizar soluções avançadas. 

Lembrar de deixar uma linha vazia ao final do arquivo.

## Código dos problemas
Aqui descreveremos como é escrito o código dos problemas.

Para problemas do *codeforces*, o código é da forma:

**cf[número_do_link][letra_do_problema]**

**Exemplo:**
para o problema *https://codeforces.com/contest/1950/problem/A*, o código é **cf1950a**.
