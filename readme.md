# Projeto de Batalha Naval 

Este projeto de Batalha Naval simula o jogo em três níveis de dificuldade usando a linguagem C e matrizes.

---

# Nível Novato
O desafio inicial com um tabuleiro 5x5, onde dois navios (um vertical e um horizontal) são posicionados e suas coordenadas são exibidas no console.

# Nível Aventureiro
O tabuleiro foi expandido para 10x10. Quatro navios são posicionados, incluindo dois na diagonal, e o tabuleiro completo é exibido.

# Nível Mestre
Este nível implementa três habilidades especiais (Cone, Cruz e Octaedro). O programa exibe a área de efeito de cada habilidade usando matrizes.

---

## Como Rodar o Projeto

1.  No arquivo `main.c`, **descomente o bloco de código do Nível** que você deseja executar e certifique-se de que os outros níveis estão com `/*` e `*/`.
2.  Abra o terminal na pasta do projeto no VS Code.
3.  Use o comando `gcc` para compilar o código:
    ```bash
    gcc main.c -o batalha_naval
    ```
4.  Execute o programa compilado:
    ```bash
    .\batalha_naval.exe
    ```