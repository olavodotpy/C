## Pré-processador em C

Pré-processadores são usados para incluir no arquivo C, funções, valores constantes, definição de estruturas, etc... evitando que vários modulos possuem uma nova definição de cada uma delas, sendo propenso a Erros. 

A linguagem C oferece mecanismos que permitem manter definições unificadas que são compartilhadas entre diversos arquivos. A base destes mecanismos é o pré-processador de código, a primeira fase na [compilação](https://github.com/olavodotpy/C/blob/Master/docs/compilador-C/COMPILADOR.md) do programa. Nesta fase, por exemplo, comentários são substituídos por espaços antes do código ser passado para a fase de [compilação](https://github.com/olavodotpy/C/blob/Master/docs/compilador-C/COMPILADOR.md). Essencialmente, o pré-processador é um processador de macros para uma linguagem de alto nível.

O programador se comunica com o pré-processador inserindo diretivas(conjunto de instruções) em um código fonte de forma a facilitar a manutenção do programa. As diretivas podem ser reconhecidas pelo simbolo "#" na primeira caluna da linha onde ocorrem. Não terminam com ponto e virgula pois não são expressões C.

Deritiva como o "#include" permite que um arquivo possam ser incluidos em um módulo. Por convenção -- chamamos aquivos de cabeçalhos -- em extensão .h(header).

A linguagem C oferece um conjunto de rotinas de suporte, para que o usuário não entre sempre com os protótipos de cada função que ele irá utilizar, esta informação ja está contida em arquivos de cabeçalhos usados pelo compilador. Por exemplo: protótipos para funções de ordenação e busca, estão em um aquivo de cabeçalho do sistema de nome stdlib.h. para usar essas definições e outras que estejam nesse arquivo o programador inclui no inicio do arquivo a linha:

```c
#include <stdlib.h>
```

o nome do arquivo de cabeçalho foi incluído entre <...>. Isto indica que este arquivo é um arquivo de cabeçalho fornecido pelo [compilador](https://github.com/olavodotpy/C/blob/Master/docs/compilador-C/COMPILADOR.md), que será incluído a partir de um diretório padrão do sistema  -- geralmente o diretório ```/usr/include``` em sistema Unix.
