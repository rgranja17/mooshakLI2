#include <stdio.h>
#include <string.h>

#define MAX_CHARS 1000

// Função que verifica se uma palavra tem consoantes alternadas com vogais
int verifica_palavra(char* palavra) {
    int len = strlen(palavra);
    char vogais[] = "AEIOUY";
    char ultimo = palavra[0];
    
    for (int i = 1; i < len; i++) {
        char atual = palavra[i];
        // Verifica se há duas vogais ou duas consoantes seguidas
        if (((strchr(vogais, ultimo) != NULL) && (strchr(vogais, atual) != NULL)) || 
            ((strchr(vogais, ultimo) == NULL) && (strchr(vogais, atual) == NULL))) {
            return 0;
        }
        ultimo = atual;
    }
    
    return 1;
}

int main() {
    int n;
    if (scanf("%d", &n)) {}
    
    // Lê cada linha de palavras e conta quantas delas têm consoantes alternadas com vogais
    for (int i = 0; i < n; i++) {
        char linha[MAX_CHARS];
        if (scanf(" %[^\n]", linha)) {}
        
        int count = 0;
        char* palavra = strtok(linha, " ");
        while (palavra != NULL) {
            if (verifica_palavra(palavra)) {
                count++;
            }
            palavra = strtok(NULL, " ");
        }
        
        printf("%d\n", count);
    }
    
    return 0;
}
