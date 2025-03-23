#include <stdio.h>

int main() {
   
    int tabuleiro_naval[10][10] = {0};

    tabuleiro_naval[1][4] = 3;
    tabuleiro_naval[1][5] = 3;
    tabuleiro_naval[1][6] = 3;

    tabuleiro_naval[4][9] = 3;
    tabuleiro_naval[5][9] = 3;
    tabuleiro_naval[6][9] = 3;

    tabuleiro_naval[4][1] = 3;
    tabuleiro_naval[5][2] = 3;
    tabuleiro_naval[6][3] = 3;

    tabuleiro_naval[7][6] = 3;
    tabuleiro_naval[8][5] = 3;
    tabuleiro_naval[9][4] = 3;

    printf("Coordenadas do primeiro navio (horizontal):\n");
    printf("(1 , 4) - (1 , 5) - (1 , 6)\n");

    printf("Coordenadas do segundo navio (vertical):\n");
    printf("(4 , 9) - (5 , 9) - (6 , 9)\n");

    printf("Coordenadas do terceiro navio (diagonal crescente):\n");
    printf("(4 , 1) - (5 , 2) - (6 , 3)\n");

    printf("Coordenadas do terceiro navio (diagonal decrescente):\n");
    printf("(7 , 6) - (8 , 5) - (9 , 4)\n");


    printf("\n   ->TABULEIRO NAVAL<-\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    for (int linha = 0; linha < 10; linha++){
        printf("%d  ", linha);
        for (int coluna = 0; coluna < 10; coluna++){
            if (tabuleiro_naval[linha][coluna] == 3){
                printf("3 ");
            }else{
                printf("~ ");
            }
        }
        
        printf("\n");
    }
    

      

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
