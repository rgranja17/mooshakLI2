#include <stdio.h>
#include <string.h>

#define MAX_CHARS 1000

int main() {
    int n;
    if (scanf("%d", &n)) {}
    char linha[MAX_CHARS];
    char repetido[n];
    
    for (int i = 0; i < n; i++) {
        if (scanf("%s", linha)) {}
        int contador[26] = {0}; // inicializa o contador de caracteres com zero
        int len = strlen(linha);
        
        // percorre a linha e conta a ocorrência de cada caractere
        for (int j = 0; j < len; j++) {
            contador[linha[j] - 'A']++;
        }
        
        // encontra o caractere que se repete
        for (int j = 0; j < 26; j++) {
            if (contador[j] == 2) {
                repetido[i] = j + 'A';
                break;
            }
        }
    }
    
    // imprime os caracteres repetidos
    for (int i = 0; i < n; i++) {
        printf("%c", repetido[i]);
    }
    printf("\n");
    
    return 0;
}
