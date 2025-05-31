#include <stdio.h>

// Função recursiva que move a torre para a direita
void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Torre se moveu para a direita. \n");
        // Chamada recursiva reduzindo o número de casas
        moverTorre(casas - 1);
    }
}

// Função recursiva que move o bispo em diagonal (cima + direita)
void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("Bispo se moveu para cima\n");

        if (casas > 0)
        {
            printf("Bispo se moveu para direita\n");
            // Reduz 2 casas por passo (uma para cima, outra para direita)
            moverBispo(casas - 2);
        }
    }
}

// Função recursiva que move a rainha para a esquerda
void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("Rainha se moveu para a esquerda.\n");
        // Chamada recursiva com uma casa a menos
        moverRainha(casas - 1);
    }
}

int main(){

    // Variáveis representando quantas casas cada peça irá se mover
    int torre = 5, bispo = 6, rainha = 8, cavalo = 1;

    // Movimenta a torre 5 vezes para a direita
    moverTorre(torre); 

    printf("\n");

    // Movimenta o bispo com movimentação recursiva (diagonal)
    moverBispo(bispo);

    printf("\n");

    // Loop que movimenta o bispo para direita uma vez (por causa do loop interno)
    // e depois para cima, até que o valor de bispo chegue a zero
    do   
    {
        for (int BISPO = 1; BISPO > 0; BISPO--)
        {
            printf("Bispo se moveu para direita.\n");
        }

        printf("Bispo se moveu para cima.\n");
        
        bispo--;
    } while (bispo > 0);
    
    printf("\n");

    // Movimenta a rainha 8 vezes para a esquerda
    moverRainha(rainha);

    printf("\n");
    
    // Movimenta o cavalo: sobe duas vezes e depois vai para a direita, uma única vez
    while (cavalo > 0)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Cavalo se moveu para cima. \n");
        }

        printf("Cavalo se moveu para direita");
        cavalo--;
    } 

}
