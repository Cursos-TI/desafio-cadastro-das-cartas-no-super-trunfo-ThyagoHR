#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10
#define HABILIDADE 5

    //Função recursiva para aplicar a habilidade ao tabuleiro
    void aplicarHabilidade(int tabuleiro [COLUNAS][LINHAS], int habilidade [HABILIDADE][HABILIDADE], int origemX, int origemY){

        for (int i = 0; i < HABILIDADE; i++)
        {
            for (int j = 0; j < HABILIDADE; j++)
            {
               int x = origemX - 2 + i;
               int y = origemY - 2 + j;
               if (x >= 0 && x < COLUNAS && y >= 0 && y < LINHAS)
               {
                if (habilidade[i][j] == 1 && tabuleiro[x][y] == 0)
                {
                    tabuleiro[x][y] = HABILIDADE;
                }
                
               }
               
            }
            
        }
        
    }

int main(){

    int soma = 0;
    //Matriz do tabuleiro
    int tabuleiro [COLUNAS][LINHAS] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    //Defininido a posição dos navios
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[2][1 + i] = 3;
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[4 + i][2] = 3;
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[5 + i][5 + i] = 3;
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[i][9 - i] = 3;
    }

    //Matrizes de habilidades
    int cone [HABILIDADE][HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0},
    };

    int cruz [HABILIDADE][HABILIDADE] = {
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0},
        {0, 0, 1, 0, 0},
    };

    int octaedro [HABILIDADE][HABILIDADE] = {
        {0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 0, 0},
    };

    //Aplicando as habilidades
    
    aplicarHabilidade(tabuleiro, cone, 2, 2);
    aplicarHabilidade(tabuleiro, cruz, 5, 5);
    aplicarHabilidade(tabuleiro, octaedro, 7 , 2);
    
    printf("       ---BATALHA NAVAL---\n");

    printf("   "); // Espaço inicial para alinhar as letras
    for (char letra = 'A'; letra <= 'J'; letra++)
    {
        printf(" %c ", letra);
    }
    printf("\n");

    for (int i = 0; i < COLUNAS; i++) {
        printf("%2d ", i + 1);

        for (int j = 0; j < LINHAS; j++) {
            if (tabuleiro[i][j] == 0)
                printf(" 0 ");
            else if (tabuleiro[i][j] == 3)
                printf(" 3 ");
            else if (tabuleiro[i][j] == HABILIDADE)
                printf(" 5 ");
        }
        printf("\n");
    }
     
}