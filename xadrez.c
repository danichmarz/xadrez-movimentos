#include <stdio.h>

// Protótipos das funções
void moverTorre(int passos);
void moverBispo(int passosVertical, int passosHorizontal);
void moverRainha(int passos);
void moverCavalo(void);

int main() {
    printf("Movimento da Torre:\n");
    moverTorre(5);

    printf("\nMovimento do Bispo:\n");
    moverBispo(5, 5);

    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}

// Função recursiva para movimento da Torre (direita)
void moverTorre(int passos) {
    if (passos == 0) return; // condição de parada
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função com loops aninhados para movimento do Bispo (diagonal: cima + direita)
void moverBispo(int passosVertical, int passosHorizontal) {
    for (int v = 0; v < passosVertical; v++) {
        for (int h = 0; h < passosHorizontal; h++) {
            printf("Cima Direita\n");
        }
    }
}

// Função recursiva para movimento da Rainha (esquerda)
void moverRainha(int passos) {
    if (passos == 0) return; // condição de parada
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função com loops aninhados complexos para movimento do Cavalo (2 para cima, 1 para direita)
void moverCavalo() {
    int movimentosParaCima = 2;
    int movimentosParaDireita = 1;

    for (int i = 0; i < movimentosParaCima; i++) {
        printf("Cima\n");
        for (int j = 0; j < movimentosParaDireita; j++) {
            // Apenas na última repetição do loop externo, o Cavalo se move para direita
            if (i == movimentosParaCima - 1) {
                printf("Direita\n");
                break; // sai do loop interno após o movimento para direita
            }
        }
    }
}
