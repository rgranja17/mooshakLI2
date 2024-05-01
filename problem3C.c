#include <stdio.h>

int main() {
    int n, k, i, j, count;

    // Lê o número de casos
    if (scanf("%d", &n)) {

        // Para cada caso
        while (n--) {
            // Lê o número de anões
            if (scanf("%d", &k)) {

                // Declara um array para armazenar as alturas dos anões
                int height[k];

                // Lê as alturas dos anões e armazena no array
                for (i = 0; i < k; i++) {
                    if (scanf("%d", &height[i])) {
                    }
                }

                // Inicializa o contador de anões visíveis com 1, pois o primeiro sempre será visível
                count = 1;

                // Inicializa a maior altura como a altura do primeiro anão
                int max_height = height[0];

                // Percorre as alturas dos anões a partir do segundo
                for (j = 1; j < k; j++) {
                    // Se a altura atual for maior do que a maior altura já encontrada
                    if (height[j] > max_height) {
                        // Incrementa o contador de anões visíveis
                        count++;

                        // Atualiza a maior altura
                        max_height = height[j];
                    }
                }

                // Imprime o número de anões visíveis
                printf("%d\n", count);
            }
        }
    }

    return 0;
}
