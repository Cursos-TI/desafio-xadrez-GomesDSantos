#include <stdio.h>

int main(void) {


    int bispoX,bispoY,rainhaX,rainhaY,torreX,torreY,cont, escolha; //VARIAVEIS DO PROJETO
    do {
        //DEFINIÇÃO DA ESCOLHA DE MOVIMENTAÇÃO DA PEÇA
        printf("QUAL PECA DESEJA MOVIMENTAR?\n\n");
        printf("1.Bispo\n2.Torre\n3.Rainha\n4.Sair\n\n");
        scanf("%i",&escolha);
        printf("\n");

        //MOVIMENTAÇÃO DAS PEÇAS
        switch (escolha) {
            case 1: { //CASOS DE MOVIMENTAÇÃO: BISPO
                bispoX,bispoY = 0;
                cont = 1;
                while (cont != 6) {
                    printf("POSICAO BISPO (%i): X - %i / Y - %i\n", cont, bispoX, bispoY);
                    bispoX++;
                    bispoY++;
                    cont++;
                }
                printf("\n");
                break;
            }
            case 2: { //CASOS DE MOVIMENTAÇÃO: TORRE
                torreX = 0;
                torreY = 0;
                cont = 1;
                while (cont != 6) {
                    printf("POSICAO TORRE (%i): X - %i / Y - %i\n", cont, torreX, torreY);
                    torreX++;
                    cont++;
                }
                printf("\n");
                break;
            }
            case 3: { //CASOS DE MOVIMENTAÇÃO: RAINHA
                rainhaX = 8;
                rainhaY = 8;
                for (cont = 1; cont <= 8; cont++) {
                    printf("POSICAO RAINHA (%i): X - %i / Y - %i\n", cont, rainhaX, rainhaY);
                    rainhaX--;
                }
                printf("\n");
                break;
            }
            case 4: { //CASOS DE MOVIMENTAÇÃO: SAIDA DO PROGRAMA
                printf("Obrigado por jogar!");
                printf("\n");
                break;
            }
            default: //CASOS DE MOVIMENTAÇÃO: OPCAO INVALIDA
                printf("Esse opcao nao e valida");
        }
    } while (escolha != 4);
}
