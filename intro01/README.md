# Padrão

## Diretório da Oficina Introdutória 01
Os diretórios dessa sessão deverão ser da seguinte forma:

**./week[número]**

em que 
- **[número]** é um número inteiro que indica o índice da semana da oficina, sempre com dois dígitos

**Exemplo:** ./week03

Existirá também o arquivo $good-problems.md$ onde poderemos salvar problemas que não se encaixam exatamente em alguma semana, mas poderão ser úteis para outras semanas futuras.
Os problemas devem ser salvos da seguinte forma:

**\*\*[código_do_problema]:\*\* [link_do_problema] - [tags_simples_de_conteúdo]** \

As tags de conteúdo são poucas palavras descrevendo o tipo de algoritmo utilizado na solução. Alguns exemplos de tags são *bruteforce, grafos, muf/dsu, segtree*.

## Para dentro do diretório

Todos os diretórios de contests terão os seguintes arquivos:

### problem-codes.md
Arquivo onde terão todos os problemas do contest, escritos em linhas diferentes, sempre identando com alinhamento dos links e em sequência esperada para o contest real, da seguinte forma:

**\*\*[código_do_problema]:\*\* [link_do_problema]** \

Apenas para a última linha, o símbolo \\ não será escrito. Lembrar de deixar uma linha vazia ao final do arquivo.

**Exemplo:** \*\*cfr937d4a:\*\* https://codeforces.com/contest/1950/problem/A \

para esse arquivo, deve-se separar os problemas que serão apresentados na aula da seguinte forma:

```
[problemas_da_semana]

AULA \
[problemas_para_apresentar]
```

### problem-solutions.md
Arquivo onde terão as soluções escritas dos problemas do arquivo *problem-codes.md*. Os problemas devem estar em mesma ordem do outro arquivo e devem ter a seguinte forma:

```
\*\*[código_do_problema]\*\* 

[solução_escrita]
```

A separação dos problemas segue igual aqui.

```
[problemas_da_semana]

AULA \
[problemas_para_apresentar]
```

### Diretório: solutions
Esse diretório é destinado para conter uma a duas soluções por problema da oficina.

Os arquivos de solução devem ter a seguinte nomenclatura:

**[código_do_problema]-[nome_de_quem_resolveu].cpp**

Lembremos de adequar as soluções para o nível do contest, ou seja, se o contest for introdutório, não utilizar soluções avançadas. 

Lembrar de deixar uma linha vazia ao final do arquivo.

### Diretório: contents
Esse diretório é destinado para conter os materiais que serão apresentados durante a oficina e os materiais de apoio.

Pode conter um arquivo *external.md* onde contêm links para materiais externos também, mas recomenda-se que todo o material esteja incluso dentro do repositório para utilização posterior.

## Código dos problemas
Aqui descreveremos como é escrito o código dos problemas.

Para problemas do *codeforces*, o código é da forma:

**cf[número_do_link][letra_do_problema]**

**Exemplo:**
para o problema *https://codeforces.com/contest/1950/problem/A*, o código é **cf1950a**.
