#include <stdio.h>

void habilidades(int tabuleiro_naval[10][10], int habilidade[3][5], int linha_central, int coluna_central){
    //MATRIZ 3X5 QUE REPRESENTAM AS HABILIDADES
    for (int a = 0; a < 3; a++)
    for (int b = 0; b < 5; b++) {
        //CÁLCULO DA POSIÇÃO QUE SERÁ OCUPADA NO TABULEIRO
        int linha = linha_central - 1 + a;
        int coluna = coluna_central - 2 + b;

        //VERIFICAÇÃO SE A HABILIDADE ENTÁ NOS LIMETES DO TABULEIRO 10X10
        if(linha >= 0 && linha < 10 && coluna >= 0 && coluna < 10){
            //CASO ESTEJA, AFETARA O TABULEIRO OCUPANDO O VALOR 1
            if(habilidade[a][b] == 1){
                tabuleiro_naval[linha][coluna] = 1;
            }
        }



    }
}


int main() {
   
    //INICIALIZAÇÃO DO TABULEIRO 10X10 ONDE O 0 REPRESENTA A ÁGUA
    int tabuleiro_naval[10][10] = {0};

    //NAVIOS SÃO REPRESENTADOS PELO NÚMERO 3
    //NAVIO NA HORIZONTAL
    tabuleiro_naval[1][4] = 3;
    tabuleiro_naval[1][5] = 3;
    tabuleiro_naval[1][6] = 3;

    //NAVIO NA VERTICAL
    tabuleiro_naval[4][9] = 3;
    tabuleiro_naval[5][9] = 3;
    tabuleiro_naval[6][9] = 3;

    //NAVIO NA DIAGONAL CRESCENTE
    tabuleiro_naval[4][1] = 3;
    tabuleiro_naval[5][2] = 3;
    tabuleiro_naval[6][3] = 3;

    //NAVIO NA DIAGONAL DECRESCENTE
    tabuleiro_naval[7][6] = 3;
    tabuleiro_naval[8][5] = 3;
    tabuleiro_naval[9][4] = 3;

    //IMPRIME AS COORDENADAS DO NAVIO DA HORIZONTAL
    printf("Coordenadas do primeiro navio (horizontal):\n");
    printf("(1 , 4) - (1 , 5) - (1 , 6)\n");

    //IMPRIME AS COORDENADAS DO NAVIO DA VERTICAL
    printf("Coordenadas do segundo navio (vertical):\n");
    printf("(4 , 9) - (5 , 9) - (6 , 9)\n");

    //IMPRIME AS COORDENADAS DO NAVIO DA CRESCENTE
    printf("Coordenadas do terceiro navio (diagonal crescente):\n");
    printf("(4 , 1) - (5 , 2) - (6 , 3)\n");

    //IMPRIME AS COORDENADAS DO NAVIO DA DIAGONAL DECRESCENTE
    printf("Coordenadas do terceiro navio (diagonal decrescente):\n");
    printf("(7 , 6) - (8 , 5) - (9 , 4)\n");


    //DEFINIÇÃO DOS PADRÕES DE HABILIDADES
    //PADRÃO DE CONE
    int cone[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };

    //PADRÃO DE OCTAEDRO
    int octa[3][5] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    //PADRÃO DE CRUZ
    int cruz[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };

    //HABILIDADES APLICADAS NO TABULEIRO NAVAL
    habilidades(tabuleiro_naval, cone, 4, 5 ); //CONE CONTRADO EM 4, 5
    habilidades(tabuleiro_naval, octa, 1, 1 ); //OCTAEDRO CONTRADO EM 1, 1
    habilidades(tabuleiro_naval, cruz, 8, 2 ); //CRUZ CONTRADO EM 8, 2


    printf("\n   ->TABULEIRO NAVAL<-\n");
    printf("   0 1 2 3 4 5 6 7 8 9\n");
    for (int linha = 0; linha < 10; linha++){
        printf("%d  ", linha); //NÚMERO IDENTIFICADOR DA LINHA

        //IMPRIME CADA COLUNA DA LINHA 
        for (int coluna = 0; coluna < 10; coluna++){
            if (tabuleiro_naval[linha][coluna] == 3){
                printf("3 "); //NAVIOS
            }else if (tabuleiro_naval[linha][coluna] == 1){
                printf("1 "); //HABILIDADES
            }else {
                printf("0 "); //ÁGUA
            }
        }
    
        
        printf("\n");
    }


    //IMPRIME AS COORDENADAS DO CENTRO DE CADA HABILIDADE, OU SEJA, SUA ORIGEM
    printf("\nCOORDENADAS DE HABILIDADES:\n");
    printf("CENTRO DO CONE: (4, 5).\n");
    printf("CENTRO DO OCTAEDRO: (1, 1).\n");
    printf("CENTRO DA CRUZ: (8, 2).\n");
      

    return 0;
}
