#include <stdio.h>
#include <string.h>

#define cozinheiros 40
#define max_nome 21

int main() {
    int n, i, j;
    char nome[max_nome];
    char nomes[cozinheiros][max_nome];
    int faltas[cozinheiros] = {0};
    int num_cozinheiros = 0;

    if (scanf("%d", &n)){}
    getchar(); // consome o '\n' após o scanf

    for (i = 0; i < n; i++) {
        char linha[cozinheiros * (max_nome + 1)]; // +1 para o '\n' em cada nome
        if (fgets(linha, cozinheiros * (max_nome + 1), stdin)){}

        // percorre cada nome na linha
        char *ptr = linha;
        while (*ptr != '\n' && *ptr != '\0') {
            // extrai o próximo nome
            int k = 0;
            while (*ptr != ' ' && *ptr != '\n' && *ptr != '\0' && k < max_nome-1) {
                nome[k] = *ptr;
                k++;
                ptr++;
            }
            nome[k] = '\0';
            ptr++; // consome o espaço ou o '\n'

            // verifica se o nome já existe no array de nomes
            int nome_encontrado = 0;
            for (j = 0; j < num_cozinheiros; j++) {
                if (strcmp(nomes[j], nome) == 0) {
                    nome_encontrado = 1;
                    faltas[j]++;
                    break;
                }
            }

            // se o nome não foi encontrado, adiciona ao array de nomes
            if (!nome_encontrado) {
                strcpy(nomes[num_cozinheiros], nome);
                faltas[num_cozinheiros] = 1;
                num_cozinheiros++;
            }
        }
    }

    
    int min_faltas = n + 1;
    char nome_min_faltas[max_nome];
    for (j = 0; j < num_cozinheiros; j++) {
        if (faltas[j] < min_faltas) {
            min_faltas = faltas[j];
            strcpy(nome_min_faltas, nomes[j]);
        }
    }
    printf("%s\n", nome_min_faltas);

    return 0;
}
