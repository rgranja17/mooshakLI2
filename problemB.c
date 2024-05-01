#include <stdio.h>

int main() {
    int a, b, c;
    int n_read = scanf("%d %d %d", &a, &b, &c);
    if (n_read != 3) {
        printf("Erro na leitura dos dados!\n");
        return 1;
    }
    if (a == b && b == c) {  // caso todas as alturas sejam iguais
        printf("OK\n");
    } else if ((a < b && b < c) || (a > b && b > c) ||
               (a == b && c > b) || (b == c && a < b) ||
               ((a == b && c < b) || (b == c && a > b))) {  // caso estejam por ordem crescente ou decrescente
        printf("OK\n");
    } else {  // caso contrário
        printf("NAO\n");
    }
    return 0;
}
