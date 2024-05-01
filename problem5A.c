#include <stdio.h>

int main() {
    int num_cases;
    if (scanf("%d", &num_cases)){}
    
    while (num_cases--) { // Repete para cada caso
        int num_elements;
        if (scanf("%d", &num_elements)){}
        
        int initial;
        if (scanf("%d", &initial)){} // Lê o primeiro elemento
        
        int next[num_elements];
        for (int i = 0; i < num_elements; i++) {
            if (scanf("%d", &next[i])){} // Lê os elementos seguintes
        }
        
        int visited[num_elements];
        for (int i = 0; i < num_elements; i++) {
            visited[i] = 0; // Inicializa o vetor de visitados com zeros
        }
        
        int current = initial; // Define o elemento atual como o primeiro
        int prev = 0;
        
        while (1) { // Loop infinito, que deve ser interrompido com os comandos break
            if (visited[current-1]) { // Se o elemento já foi visitado, significa que há um ciclo
                printf("%d CICLO INFERNAL\n", current);
                break;
            }
            
            visited[current-1] = 1; // Marca o elemento atual como visitado
            
            if (next[current-1] == 0) { // Se o próximo elemento for zero, chegou ao fim da lista
                printf("%d\n", current);
                break;
            }
            
            printf("%d ", current); // Imprime o elemento atual
            
            prev = current; // Atualiza o valor de "prev" para o valor atual
            current = next[current-1]; // Atualiza o valor de "current" para o próximo elemento
            
            if (visited[current-1] && current != prev) { // Se o próximo elemento já foi visitado, significa que há um ciclo
                printf("CICLO INFERNAL\n");
                break;
            }
        }
    }
    
    return 0;
}
