#include <stdio.h>

int main() {
    int a, n;
    if (scanf("%d %d", &a, &n)){}

    int registros[24][101] = {0}; // matriz para guardar os registros de presença
    for (int i = 0; i < n; i++) {
        int agente, horaChegada, horaPartida;
        if (scanf("%d %d %d", &agente, &horaChegada, &horaPartida)){}

        for (int h = horaChegada; h <= horaPartida; h++) {
            registros[h][agente] = 1; // marca presença do agente na hora h
        }
    }

    for (int h = 0; h < 24; h++) {
        int presentes[101] = {0}; // vetor para guardar os agentes presentes na hora h
        int count = 0; // contador de agentes presentes na hora h

        for (int a_id = 1; a_id <= a; a_id++) {
            if (registros[h][a_id]) { // verifica se o agente a_id está presente na hora h
                presentes[count] = a_id;
                count++;
            }
        }

        if (count > 1) { // se há mais de um agente presente na hora h, imprime a linha correspondente
            printf("%d", h);
            for (int i = 0; i < count; i++) {
                printf(" %d", presentes[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
