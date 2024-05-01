#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int num;
    char dif;
    int preco;
} Pedido;

int comparaPedidos(const void *a, const void *b) {
    Pedido *p1 = (Pedido *)a;
    Pedido *p2 = (Pedido *)b;
    if (p1->preco > p2->preco){ 
      return -1; // preço decrescente
   } else if (p1->preco < p2->preco) {
      return 1;
   } else if (p1->dif < p2->dif){ 
      return -1; // se o preço for igual, ordena pela dificuldade
   } else if (p1->dif > p2->dif) {
      return 1;
   } else if (p1->num < p2->num) {
      return -1; // se a dificuldade for igual, ordena pelo número do pedido
   } else return 1;
}

int main() {
    int n;
   if (scanf("%d", &n)){}
   Pedido *pedidos = (Pedido*)malloc(n * sizeof(Pedido));
   for (int i = 0; i < n; i++) {
   if (scanf("%d %c %d", &pedidos[i].num, &pedidos[i].dif, &pedidos[i].preco)){}
    }
   // ordena os pedidos usando a função de comparação definida acima
   qsort(pedidos, n, sizeof(Pedido), comparaPedidos);
   for (int i = 0; i < n; i++) {
        printf("%d %c %d\n", pedidos[i].num, pedidos[i].dif, pedidos[i].preco);
    }
   free(pedidos);
   return 0;
}
