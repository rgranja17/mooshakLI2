#include <stdio.h>
#include <string.h>

int main() {
    char posicoes_input[10]; // String para armazenar as posições
    char mensagem_input[1001]; // String para armazenar a mensagem
    int indice_mensagem, indice_original, n, m, ordem[10]; // Variáveis para índices e tamanho das strings e para a ordem

    if (scanf("%s", posicoes_input)){}
    if (scanf("%s", mensagem_input)){}

    // Obtendo o tamanho das strings
    n = strlen(posicoes_input);
    m = strlen(mensagem_input);

    // Obtendo a ordem das posições
    for (indice_mensagem = 0; indice_mensagem < n; indice_mensagem++) {
        ordem[indice_mensagem] = posicoes_input[indice_mensagem] - '0' - 1; // Convertendo o caractere para um número inteiro
    }

    // Imprimindo a mensagem reordenada
    for (indice_mensagem = 0; indice_mensagem < n; indice_mensagem++) {
        for (indice_original = ordem[indice_mensagem]; indice_original < m; indice_original += n) {
            printf("%c", mensagem_input[indice_original]); // Imprimindo o caractere da mensagem na posição correspondente
        }
    }
    printf("\n"); // Imprimindo uma nova linha no final

    return 0; 
}
