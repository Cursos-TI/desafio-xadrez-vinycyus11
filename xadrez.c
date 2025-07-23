// 1. Inclusão da biblioteca padrão de entrada e saída
#include <stdio.h>

// 2. Função principal do programa
int main() {
    // 3. Definição de constantes para as quantidades de movimentos
    const int MOV_BISPO = 5;
    const int MOV_TORRE = 5;
    const int MOV_RAINHA = 8;

    // 4. Declaração de variáveis de controle
    int i;

    // 5. Movimentação do BISPO usando estrutura FOR
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for(i = 0; i < MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n"); // Linha em branco para separar as saídas

    // 6. Movimentação da TORRE usando estrutura WHILE
    printf("Movimentação da Torre (5 casas para a direita):\n");
    i = 0; // Reinicia a variável i
    while(i < MOV_TORRE) {
        printf("Direita\n");
        i++;
    }

    printf("\n"); // Linha em branco para separar as saídas

    // 7. Movimentação da RAINHA usando estrutura DO-WHILE
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    i = 0; // Reinicia a variável i
    do {
        printf("Esquerda\n");
        i++;
    } while(i < MOV_RAINHA);

    // 8. Retorno final da função main
    return 0;
}
