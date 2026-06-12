#include <stdio.h>
#include <windows.h>

int movenumber(int move);
void TorreMove(int n);
void BispoMove(int n);
void RainhaMove(int n);
void CavaloMove(void);
void limparTela() {
        printf("\033[H\033[J"); // Limpa a tela para manter a interface amigável
}

int main() {
    int movecount;
    int menu;
    int menuvalid;
    limparTela();
    printf("██╗  ██╗ █████╗ ██████╗ ██████╗ ███████╗███████╗\n");
    printf("╚██╗██╔╝██╔══██╗██╔══██╗██╔══██╗██╔════╝╚══███╔╝\n");
    printf(" ╚███╔╝ ███████║██║  ██║██████╔╝█████╗    ███╔╝ \n");
    printf(" ██╔██╗ ██╔══██║██║  ██║██╔══██╗██╔══╝   ███╔╝  \n");
    printf("██╔╝ ██╗██║  ██║██████╔╝██║  ██║███████╗███████╗\n");
    printf("╚═╝  ╚═╝╚═╝  ╚═╝╚═════╝ ╚═╝  ╚═╝╚══════╝╚══════╝\n\n");

    printf("           ♔ DESAFIO DE XADREZ ♔\n\n");
    printf("      Torre • Bispo • Rainha • Cavalo\n\n");
    printf("       Desenvolvido por Patrick Andre\n\n");
    //Tela de Carregamento apenas para criar uma experiência de usuário
    printf("      Carregando ");
    for (int i = 1; i < 20; ++i){
        Sleep(200);
        printf("█");
    }
    Sleep(1000);
    limparTela();
    do {
        do {
            menuvalid = 1;
            printf("Selecione a peça que será movida:\n");
            printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n\n5 -  Sair do Jogo\n");
            printf("Digite sua opção: ");
            if (scanf("%d", &menu) != 1) {
                limparTela();
                printf("Entrada invalida!\n\n");

                while (getchar() != '\n');
            }
            else {
                menuvalid = 0;
            }
        }while (menuvalid == 1);
        limparTela();
        // Menu de seleção de de peças
        switch (menu)
        {
        case 1:
            movecount = movenumber(movecount);
            TorreMove(movecount);
            printf("\n");
            break;
        case 2:
            movecount = movenumber(movecount);
            BispoMove(movecount);
            printf("\n");
        break;
        case 3:
            movecount = movenumber(movecount);
            RainhaMove(movecount);
            printf("\n");
        break;
        case 4:
            CavaloMove();
            printf("\n");
        break;

        case 5:
            printf("Obrigado por jogar!\n");
        break;
        default:
            printf("Entrada inválida\n");
        break;
        } 
    } while (menu != 5);
    return 0;
}

int movenumber(int move) {
    printf("Quantas casas deseja mover?\n");
    if (scanf("%i", &move) != 1) {
        printf("Entrada invalida!\n");
    return 0;
    }
    limparTela();
    return move;
}

void TorreMove(int n){
    if (n > 0) {
        printf("Torre moveu 1 casa para cima\n");
        TorreMove(n - 1);
    }
}
void BispoMove(int n){
    if (n > 0) {
        printf("Bispo move 1 casa para cima e 1 para a direita\n");
        BispoMove(n - 1);
    }
}
void RainhaMove(int n){
    if (n > 0) {
        printf("Rainha move 1 casa para a direita\n");
        RainhaMove(n - 1);
    }
}
void CavaloMove(){
    int horsedone = 1;
    do {
        --horsedone;
        for (int i = 1; i <= 2; i++){
            printf("Cavalo move para cima\n");
            }
    } while (horsedone > 0);
    printf("Cavalo move para direita\n");
}
