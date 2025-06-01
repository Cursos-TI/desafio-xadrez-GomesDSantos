#include <stdio.h>

int main(void) {

    int bispoX,bispoY,rainhaX,rainhaY,torreX,torreY,cavaloX,cavaloY,cont,escolha; //VARIAVEIS DO PROJETO
    do {
        //DEFINIÇÃO DA ESCOLHA DE MOVIMENTAÇÃO DA PEÇA
        printf("QUAL PECA DESEJA MOVIMENTAR?\n\n");
        printf("1.Bispo\n2.Torre\n3.Rainha\n4.Cavalo\n5.sair\n\n");
        scanf("%i",&escolha);
        printf("\n");

        //MOVIMENTAÇÃO DAS PEÇAS
        switch (escolha) {
            case 1: { //CASOS DE MOVIMENTAÇÃO: BISPO
                bispoX,bispoY = 0;
                cont = 1;
                while (cont != 6) {
                    if (cont == 1) {
                        printf("POSICAO BISPO (%i): X - %i / Y - %i = Padrao\n", cont, bispoX, bispoY);
                        cont++;
                    }
                    else if (cont != 6) {
                        bispoX++;
                        printf("POSICAO BISPO (%i): X - %i / Y - %i = Direita\n", cont, bispoX, bispoY);
                        bispoY++;
                        printf("POSICAO BISPO (%i): X - %i / Y - %i = Cima\n", cont, bispoX, bispoY);
                        cont++;
                    }
                }
                printf("\n");
                break;
            }
            case 2: { //CASOS DE MOVIMENTAÇÃO: TORRE
                torreX = 0;
                torreY = 0;
                cont = 1;
                while (cont != 6) {
                    if (cont == 1) {
                        printf("POSICAO TORRE (%i): X - %i / Y - %i = Padrao\n", cont, torreX, torreY);
                        cont++;
                    }
                    else if (cont != 6) {
                        torreX++;
                        printf("POSICAO TORRE (%i): X - %i / Y - %i = Direita\n", cont, torreX, torreY);
                        cont++;
                    }
                }
                printf("\n");
                break;
            }
            case 3: { //CASOS DE MOVIMENTAÇÃO: RAINHA
                rainhaX = 8;
                rainhaY = 8;
                for (cont = 1; cont <= 9; cont++) {
                    if (cont == 1) {
                        printf("POSICAO RAINHA (%i): X - %i / Y - %i = Padrao\n", cont, rainhaX, rainhaY);
                    }
                    else if (cont != 9) {
                        rainhaX--;
                        printf("POSICAO RAINHA (%i): X - %i / Y - %i = Esquerda\n", cont, rainhaX, rainhaY);
                    }
                }
                printf("\n");
                break;
            }
            case 4: {
                cavaloX = 5;
                cavaloY = 5;
                for (cont = 1; cont <= 5; cont++) {
                    if (cont == 1) {
                        printf("POSICAO CAVALO (%i): X - %i / Y - %i = Padrao\n", cont, cavaloX, cavaloY);
                    }
                    else if (cont <= 3) {
                        cavaloY--;
                        printf("POSICAO CAVALO (%i): X - %i / Y - %i = Baixo\n", cont, cavaloX, cavaloY);
                    }
                    else if (cont > 3) {
                        cavaloX--;
                        printf("POSICAO CAVALO (%i): X - %i / Y - %i = Esquerda\n", cont, cavaloX, cavaloY);
                        cont++;
                    }
                }
                printf("\n");
                break;
            }

            case 5: { //CASOS DE MOVIMENTAÇÃO: SAIDA DO PROGRAMA
                printf("Obrigado por jogar!");
                printf("\n");
                break;
            }
            default: { //CASOS DE MOVIMENTAÇÃO: OPCAO INVALIDA
                printf("Esse opcao nao e valida\n");
                break;
            }
        }
    } while (escolha != 5);
}
