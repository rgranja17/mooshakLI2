#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    int peso;
    int altura;
} Cozinheiro;

// Função de comparação para ordenação dos cozinheiros
int comparaCozinheiros(const void *ponteiro1, const void *ponteiro2) {
    Cozinheiro *c1 = (Cozinheiro *)ponteiro1;
    Cozinheiro *c2 = (Cozinheiro *)ponteiro2;
    int dist1 = abs(c1->peso - 90);
    int dist2 = abs(c2->peso - 90);
    if (dist1 != dist2) {
        // Prefere o mais próximo do peso ideal (90)
        return dist1 - dist2;
    } else if (c1->altura != c2->altura) {
        // Se tiverem a mesma distância ao peso ideal, prefere o mais alto
        return c2->altura - c1->altura;
    } else {
        // Se tiverem a mesma distância ao peso ideal e altura, ordena alfabeticamente
        return strcmp(c1->nome, c2->nome);
    }
}


int main() {
   int n, i;
   Cozinheiro cozinheiros[100]; // Array de cozinheiros
   if (scanf("%d", &n)){}
   
   for (i = 0; i < n; i++) {
      if (scanf("%s %d %d", cozinheiros[i].nome, &cozinheiros[i].peso, &cozinheiros[i].altura)){}
    }
   qsort(cozinheiros, n, sizeof(Cozinheiro), comparaCozinheiros);
   for (i = 0; i < n; i++) {
        printf("%s %d %d\n", cozinheiros[i].nome, cozinheiros[i].peso, cozinheiros[i].altura);
    }
   return 0;
}
