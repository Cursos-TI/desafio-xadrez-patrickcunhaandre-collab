#include <stdio.h>

int main() {
    int menu;
    int endgame = 1;
    printf("Bem vindo ao Desafio do Jogo de Xadrez\n"); // Apresentação do game
    printf("Desafio realizado por Patrick Andre\n\n");
    do {
        printf("Selecione a peça que será movida:\n");
        printf("1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\n\n5 -  Sair do Jogo\n");
        printf("Digite sua opção: ");
        scanf("%d", &menu);
        // Menu de seleção de movimentação de peças
        switch (menu){
            case 1:
                for (int i = 1; i <= 5 ; i++) {
                    printf("Torre move 1 casa para a direita\n");
                }
            break;
            case 2:
                for (int i = 1; i<= 5; i++) {
                    printf("Bisto move 1 casa para cima e 1 para a direta\n");
                }
            break;
            case 3:
                for (int i = 1; i<= 8; i++) {
                    printf("rainha move 1 casa para a direta\n");
                }
            break;
            case 4:
                int horsedone = 1;
                do {
                    --horsedone;
                    for (int i = 1; i <= 2; i++){
                        printf("Cavalo move para baixo\n");
                        }
                } while (horsedone > 0);
                printf("Cavalo move para esquerda\n");
            break;
            case 5:
                printf("Obrigado por jogar!\n");
            break;
            default:
                printf("Entrada invalida\n");
        }
    } while (menu != 5);
    
    return 0;
}
