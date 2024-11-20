# Compilador C

Um compilador é um programa de sistema que traduz um programa descrito em uma linquagem de alto nível para um programa equivalente em código de máquina para um processador. Em geral, um compilador não produz diretamente o código de máquina mas sim um programa em linguagem simbóloca(assembly) semanticamente equivalente ao programa em linguagem de alto nivel. O programa em linguagem simbólica é então traduzido para o programa em linguagem de máquina através de montadores.

Para desempenhar suas tarefas, um compilador deve executar dois tipos de atividade. A primeira é a análise do código fonte, onde a estrutura e significado do programa de alto nível são reconhecidos. A segunda atividade é a síntese do programa equivalente em linquagem simbólica. Embora conceitualmente seja possível executar toda a análise e apenas então iniciar a síntese, en geral estas duas atividades ocorrem em praticamente em paralelo.

Para o compilador, um trecho de um programa em C:

```c
int a, b, valor;
a = 10; b = 20;
valor = a * (b + 20);
```

Este segmento nada mais é do que uma sequencia de caracteres em um arquivo de texto. O primeiro passo da análise é reconhecer que agrupamentos de caracteres têm significado para o programa.

As regras de formação de elementos e frases válidas de uma linguagem são expressos na gramática da linquagem. O processo de reconhecer os comandos de uma gramática é conhecido como reconhecimento de sentenças.