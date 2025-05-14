# Simulação de Movimentação de Peças de Xadrez 🏆

Este programa em **C** simula a movimentação das principais peças do xadrez: **Torre, Bispo, Rainha e Cavalo**. Ele utiliza **recursividade** para controlar os movimentos de algumas peças e **loops complexos** para implementar a movimentação do cavalo em "L".

## 📌 Funcionalidades
✔️ **Movimentação da Torre** (Recursiva) → Movendo para a direita.  
✔️ **Movimentação do Bispo** (Recursiva + Loops Aninhados) → Movendo diagonalmente (Cima, Direita).  
✔️ **Movimentação da Rainha** (Recursiva) → Movendo para a esquerda.  
✔️ **Movimentação do Cavalo** (Loops Complexos) → Movendo em "L" (duas casas para cima e uma para a direita).  

## 🔧 Como executar
1️⃣ **Instale um compilador C**, como `gcc`.  
2️⃣ **Baixe o código-fonte** ou copie diretamente para um arquivo `movimentos_xadrez.c`.  
3️⃣ **Compile o código** usando:
   ```sh
   gcc movimentos_xadrez.c -o movimentos_xadrez

Execute o programa:
./movimentos_xadrez
📜 Exemplo de Saída
Movimentação da Torre:
Direita: 1 casa(s)
Direita: 2 casa(s)
Direita: 3 casa(s)
Direita: 4 casa(s)
Direita: 5 casa(s)

Movimentação do Bispo:
Cima, Direita: 1 casa(s)
Cima, Direita: 2 casa(s)
Cima, Direita: 3 casa(s)
Cima, Direita: 4 casa(s)
Cima, Direita: 5 casa(s)

Movimentação da Rainha:
Esquerda: 1 casa(s)
Esquerda: 2 casa(s)
Esquerda: 3 casa(s)
Esquerda: 4 casa(s)
Esquerda: 5 casa(s)
Esquerda: 6 casa(s)
Esquerda: 7 casa(s)
Esquerda: 8 casa(s)

Movimentação do Cavalo:
Cima
Cima
Direita
Cima
Cima
Direita
Esquerda

📌 Estrutura do Código
🔹 Recursividade para Torre, Bispo e Rainha.
🔹 Loops Aninhados para movimentação do Bispo.
🔹 Loops Complexos para movimentação do Cavalo
🏆 Objetivo
Este programa serve como um exemplo avançado de programação em C, explorando recursividade, manipulação de loops e lógica de movimentação baseada nas peças de xadrez. Ideal para quem deseja praticar conceitos de algoritmos e otimização de código.



