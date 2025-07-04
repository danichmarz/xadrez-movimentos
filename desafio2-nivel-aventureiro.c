#include <stdio.h>

int main() {
    // ------------------------------
    // Movimento da Torre (for loop)
    // ------------------------------
    // A Torre se move em linha reta.
    // Neste caso, simula 5 movimentos para a direita.
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar os blocos

    // ------------------------------
    // Movimento do Bispo (while loop)
    // ------------------------------
    // O Bispo se move na diagonal.
    // Simula 5 movimentos para cima e à direita.
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Linha em branco para separar os blocos

    // ------------------------------
    // Movimento da Rainha (do-while loop)
    // ------------------------------
    // A Rainha se move em todas as direções.
    // Simula 8 movimentos para a esquerda.
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n"); // Linha em branco para separar os blocos

    // ------------------------------
    // Movimento do Cavalo (for + while aninhados)
    // ------------------------------
    // O Cavalo se move em L: 2 para baixo e 1 para a esquerda
    printf("Movimento do Cavalo:\n");

    // Loop externo (for) para o movimento para baixo
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");

        // Loop interno (while) apenas para demonstrar uso aninhado
        int l = i;  // use outra variável para não conflitar com j do Bispo
        while (l > 2) { // esta condição não será verdadeira aqui
            printf("Este bloco não será executado\n");
            l--;
        }
    }

    // Após os 2 movimentos para baixo, movimento para a esquerda
    printf("Esquerda\n");

    return 0;
}