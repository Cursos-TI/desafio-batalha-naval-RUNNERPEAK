#include <stdio.h>

int main() {
   
    int tabuleiro_naval[10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    tabuleiro_naval[3][4] = 3;
    tabuleiro_naval[3][5] = 3;
    tabuleiro_naval[3][6] = 3;

    tabuleiro_naval[4][9] = 3;
    tabuleiro_naval[5][9] = 3;
    tabuleiro_naval[6][9] = 3;

    printf("Coordenadas do primeiro navio (horizontal):\n");
    printf("(3 , 4) - (3 , 5) - (3 , 6)\n");

    printf("Coordenadas do segundo navio (vertical):\n");
    printf("(4 , 9) - (5 , 9) - (6 , 9)\n");

    printf("\n--->TABULEIRO DE BATALHA NAVAL<---\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    for (int linha = 0; linha < 10; linha++){
        printf("%d  ", linha);
        for (int T = 0; T < 10; T++){
            if (tabuleiro_naval[linha][T] == 3){
                printf("3 ");
            }else{
                printf("~ ");
            }
        }
        
        printf("\n");
    }
    

      


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
