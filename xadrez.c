#include <stdio.h>

int cavaloP(void);
int torreP(void);
int bispoP(void);
int rainhaP(void);
int mov(const int movX, const int movY, const int cont);

int main(void) {

    int escolha = 0;
    do {
        //DEFINIÇÃO DA ESCOLHA DE MOVIMENTAÇÃO DA PEÇA
        int escolha = 0;
        printf("QUAL PECA DESEJA MOVIMENTAR?\n\n");
        printf("1.Bispo\n2.Torre\n3.Rainha\n4.Cavalo\n5.sair\n\n");
        scanf("%i",&escolha);
        printf("\n");

        //MOVIMENTAÇÃO DAS PEÇAS
        switch (escolha) {
            case 1: { //CASOS DE MOVIMENTAÇÃO: BISPO
                bispoP();
                break;
            }
            case 2: { //CASOS DE MOVIMENTAÇÃO: TORRE
                torreP();
                break;
            }
            case 3: { //CASOS DE MOVIMENTAÇÃO: RAINHA
                rainhaP();
                break;
            }
            case 4: { //CASOS DE MOVIMENTAÇÃO: CAVALO
                cavaloP();
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

int cavaloP(void) {
    mov(2,1,3);
    printf("\n");
    return 0;
}

int rainhaP(void) {
    mov(-8,0,8);
    printf("\n");
    return 0;
}

int torreP(void) {
    mov(5,0,5);
    printf("\n");
    return 0;
}

int bispoP(void) {
    mov(5,5,6);
    printf("\n");
    return 0;
    }

int mov(const int movX, const int movY, const int cont) {
    //VARIAVEIS DA FUNÇÃO
    int eixoX = 0;
    int eixoY = 0;
    int contInt = 0;
    int control = 0;
    //LOOP DE MOVIMENTAÇÃO
    while (contInt != cont || control != 1) {
        if (contInt == 0) {
            printf("POSICAO = (%i): X - %i / Y - %i = Padrao\n", contInt, eixoX, eixoY);
            if (movX > 0) {
                contInt++;
            }
            else {
                contInt--;
            }
        }
        else if (movX > 0) {
            while (eixoX != movX) {
                ++eixoX;
                printf("POSICAO = (%i): X - %i = Direita\n", contInt, eixoX);
                contInt++;
                if (eixoX == movX) {
                    break;
                }
            }
            contInt = 1;
            while (eixoY != movY) {
                eixoY++;
                printf("POSICAO = (%i): Y - %i = Cima\n", contInt, eixoY);
                contInt++;
                if (eixoY == movY) {
                    break;
                }
            }
            control += 1;
        }
        if (movX < 0) {
            while (eixoX != movX) {
                --eixoX;
                printf("POSICAO = (%i): X - %i = Esquerda\n", (contInt * -1), eixoX);
                contInt--;
                if (eixoX == movX) {
                    break;
                }
            }
            contInt = 1;
            while (eixoY != movY) {
                --eixoY;
                printf("POSICAO = (%i): Y - %i = Baixo\n", (contInt * -1), eixoY);
                contInt--;
                if (movY == eixoY) {
                    break;
                }
            }
            control += 1;
        }
    }
    return 0;
}

