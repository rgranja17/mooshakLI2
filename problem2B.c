#include <stdio.h>

int main() {
    int andar_atual, num_andares, num_comandos, comando, i;

    // Leitura dos dados de entrada
    if (scanf("%d %d %d", &andar_atual, &num_andares, &num_comandos)) {

    // Processamento dos comandos
    for (i = 0; i < num_comandos; i++) {
        if (scanf("%d", &comando)) {
        if (comando == -1) { // Desce um andar
            if (andar_atual > 0) { // res do chao
                andar_atual--;
            }
        } else if (comando == 1) { // Sobe um andar
            if (andar_atual < num_andares) { // ultimo andar
                andar_atual++;
            }
         }
        }
      }
    }
    

    // Imprime o andar atual
    printf("%d\n", andar_atual);

    return 0;
}
