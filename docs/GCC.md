## GCC, the GNU Compiler Collection

Todo o código-fonte de C precisa passar por um processo manual de compilação para assim, seu sistema operacional executar. Em outras linguagens como Javacript e Python o processo de compilação é escondido do desenvolvedor. No Python e em linguagens interpretadas, o desenvolvedor apenas executa o programa e não sabe o que acontece depois disso. O fluxo de execução do Python é o seguinte:

```
 sourceCode.py -> compilação para bytecode -> interpretação pela PVM(Python Virtual Machine)
```

sendo [compilado](https://github.com/olavodotpy/C/blob/Master/docs/COMPILADOR.md), interpretado e executado ao mesmo tempo. O processo de source code para bytecode é a compilação do Python semelhante ao do C, porém o bytecode é un compilador próprio para ser executado em uma máquina virtual, diferente do GCC que é compilado para [código de máquina](https://github.com/olavodotpy/C/blob/Master/docs/COMPILADOR.md).

Todas as linguagens de programação não possui uma forma certa de ser executada seja com compilação ou interpretação, na verdade depende mais do tipo de programa que está disponivel no seu PC. Se você estive com um compilador de python instalado apenas use. O mesmo para o C, se você está com a linguagem então escreva um código e use o que tiver, como o GCC que é o mais comum ou um interpretador de C para executalo. Não existe jeito certo, isso tudo é uma área cinzenta. 

## Compilando com GCC

```gcc
gcc -o hello hello.c
```

O ```-o``` é a "saida para este arquivo". Se o seu código fonte estiver dividido em vários arquivos, você pode copilá-los todos juntos, colocando todos os .c arquivos na linha de comando:

```gcc
gcc -o elementsWorksheets profile.c requests.c contracts.c
```

e todos eles serão reunidos em um grande arquivo executável.

Outra funcionalidade do GCC é forçar o usos dos padrões C como K&R C, C89, ANSI C, etc.. usando o ```-std=arg``` e se quiser a alteração por padrão, acrecente ```-pedantic```

```gcc
gcc -std=c2x -pedantic foo.c
```

Para identificar o seu padrão C atual é so usar o ```man``` de manual no terminal da sua distro linux, junto com o pipe e grep para logo localizar a versão.

```bash
man gcc | grep -e "-std=c"
```

irá aparecer um comentário e algo assim:

```bash
The default  when  in  a  standards  compliant  mode  -std=c11  or
This flag is enabled by default for -std=c++17.
```

aqui localizamos que o padrão C usado por padrão no meu sistema é o c11.