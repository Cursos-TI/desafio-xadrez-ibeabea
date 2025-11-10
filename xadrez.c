// Desafio Batalha Naval (Novato)
#include <stdio.h>

int main() {

    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Vetor de letras

    int tabuleiro [10][10]; // Declaração da Matriz

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Variáveias com tamanhos do Tabuleiro e Navio
    int tamanho = 10;
    int navio = 3;

    // Posicionamento do Navio na Horizontal (2, 4)
    for (int j = 0; j < 3; j++) {
        tabuleiro[2][4 + j] = navio;
    }

    // Posicionamento do Navio na Vertical (5, 7)
    for (int i = 0; i < 3; i++) {
        tabuleiro[5 + i][7] = navio;
    }

    // Exibindo o Tabuleiro
    printf("TABULEIRO BATALHA NAVAL \n");

    printf("   ");

    for (int j = 0; j < 10; j++) {
    printf("%c ", linha[j]); // imprime os números das colunas
    }

    printf("\n");

    // Imprime linhas numeradas
    for (int i = 0; i < tamanho; i++) {
        printf("%2d ", i + 1); // linhas de 1 a 10
        for (int j = 0; j < tamanho; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}