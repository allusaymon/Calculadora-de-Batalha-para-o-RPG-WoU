# <p align='center'> Calculadora de Batalha RPG </p> 

---

>>>### Objetivo: Algoritmo desenvolvido em C para automatizar e otimizar os cálculos de dano e velocidade do meu sistema de RPG de mesa medieval WoU (aWakening of United Front).
>>>O objetivo foi eliminar a necessidade de realizar cálculos manuais complexos a cada turno, gerenciando automaticamente as diferenças de atributos (força, defesa e velocidade), multiplicadores de dano (Normal, Bom, Perfeito e Extremo) e modificadores de habilidades e magias dos personagens. Com este projeto, planejava consolidar meus conhecimentos em lógica de programação na linguagem C, manipulando variáveis, estruturas condicionais, loops, ponteiros e manipulação de strings.


<br>
<br>
<br>


---

### Conceito do Projeto e Progresso:
### Uma vez que cada ficha possuía 3 valores denominados de "Força", "Defesa" e "Velocidade" e modificadores que aumentam ou reduzem esses valores em diferentes tipos de batalha, o cálculo era fácil e intuitivo, mas demandava tempo conforme a quantidade de modificadores aumentavam. Portanto, em uma madrugada, criei a lógica desse algoritmo que iria me espelhar para concretizar meu objetivo:
**Sistema de Batalha**:
- FOR (Sua) - DEF (Oponente) = X (Dano Normal que será desferido ao oponente)
- 2X = Extremo
- Normal(X)-Bom( _ )-Perfeito( _ )-Extremo(2X) = Gerar uma sequência periódica e coerente entre Normal e Extremo, onde os danos "Bom" e "Perfeitos" são maiores que o Normal, mas menores que o Extremo.

Caso o resultado da batalha, ou seja, a subtração entre a "Força" Atacante e a "Defesa" Oponente seja -X (um número negativo), o cálculo mudará para:
- -X = Normal
- X/4 = Extremo
- Normal(-X)-Bom( _ )-Perfeito( _ )-Extremo(X/4) = Gerar uma sequência periódica e coerente entre Normal e Extremo, onde os danos "Bom" e "Perfeitos" são maiores que o Normal, mas menores que o Extremo.

Para o caso do atributo de Velocidade, funciona desta forma:
Diferença de Velocidade: Em alguns combates, quem tiver maior pontuação no atributo "velocidade" pode ganhar vantagem, dependendo do quão alto o valor é em comparação ao seu adversário. São:
Entre 1~25: Você consegue atacar primeiro, contanto que não falhe. Isso faz toda diferença em momentos acirrados nos outros dois atributos. Se o adversário falhar, você ganha direito a mais um turno.
Entre 26~50: Você ataca primeiro e é capaz de ter 1 turno extra adicional antes que chegue na vez do adversário, caso o adversário atinja "normal", com você tirando classificação superior. Nesta ocasião, o adversário apenas enxerga uma miragem de velocidade.
Entre 51~75: O adversário apenas vê um vulto passando, devido seu olho não estar acostumado. 

#### Se fosse para traçar um cronograma de progresso, meu objetivo com este projeto é:
1. Criar uma calculadora funcional que opere sob estas circunstâncias.
2. Criar um perfil para cada jogador, onde o usuário final possa iniciar a execução do script escolhendo se o jogador ou seu Suporte (NPC que acompanha o jogador) que irá começar na batalha e dar início ao cálculo de batalha com os parâmetros correspondentes a cada um.
3. Cada ação que o algoritmo precisa ter é:
- Questionar se o personagem jogador ou seu Suporte que iniciará o turno de batalha:
- Questionar quais são os valores dos atributos do oponente a quem estão enfrentando em batalha ("Força", "Defesa" e "Velocidade"):
- Quantas habilidades o personagem jogador está utilizando naquele turno, tendo em vista que se pode utilizar dois modificadores de valores por vez ou mais, caso já tenham sido ativados em turnos anteriores.
- Selecionar qual tipo modificador de valor de atributo está utilizando, podendo ser dividido entre "Variação" e "Magia".
- Questionar se está atacando ou defendendo no turno específico.
4. Criar um perfil para cada jogador, onde o usuário final possa iniciar a execução do script escolhendo qual jogador ou o Suporte (NPC que acompanha o jogador) irá utilizar e começando o cálculo de batalha com os parâmetros de cada um.

---

### <p align='center'> Conteúdos utilizados: </p>

- :white_check_mark: Tipos primitivos (```char, short, int, float, etc.```)
- :white_check_mark: Condicionais (```if, else, else if```)
- :white_check_mark: Loops (```for```)
- :white_check_mark: Operadores (```+ - * / % && || ? :```)
- :white_check_mark: Arrays uni e multidimensionais (```vetores e strings```)
- :white_check_mark: Strings (array de chars e ```strcmp()```)
- :white_check_mark: Funções
- :white_check_mark: Ponteiros (```* e &```)
- :white_check_mark: Bibliotecas (```#include <stdio.h>, #include <string.h>```)
- :x: Enums
- :x: Unions
- :x: Structs e typedef
- :x: Alocação na heap
- :x: I/O arquivos 
- :x: Diretivas 
- :x: Makefiles (automação de compilação)
- :x: GCC (compilador)
- :x: Debugs e testes
- :x: Macros
- :x: <stdarg.h>
- :x: Bitwise 
- :x: <unistd.h>
- :x: <threads.h>
- :x: Bare-metal

----
