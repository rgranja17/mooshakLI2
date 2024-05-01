#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, inzel_wins = 0, cmd_wins = 0, ties = 0;
    char inzel_move, cmd_move;
    
    if (scanf("%d", &n) != 1) {
        printf("Erro de entrada!\n");
        return 1;  // ou outro valor de retorno de erro
    }

    for (i = 0; i < n; i++) {
        if (scanf(" %c %c", &inzel_move, &cmd_move) != 2) {
            printf("Erro de entrada!\n");
            return 1;  // ou outro valor de retorno de erro
        }

        if (inzel_move == '@' && cmd_move == '*') ties++;
        else if (inzel_move == '|' && cmd_move == '-') ties++;
        else if (inzel_move == 'X' && cmd_move == '+') ties++;
        else if (inzel_move == '@' && cmd_move == '-') cmd_wins++;
        else if (inzel_move == '@' && cmd_move == '+') inzel_wins++;
        else if (inzel_move == '|' && cmd_move == '*') inzel_wins++;
        else if (inzel_move == '|' && cmd_move == '+') cmd_wins++;
        else if (inzel_move == '|' && cmd_move == '-') ties++;
        else if (inzel_move == 'X' && cmd_move == '-') inzel_wins++;
        else if (inzel_move == 'X' && cmd_move == '*') cmd_wins++;
        
    }

    printf("%d %d %d\n", inzel_wins, cmd_wins, ties);

    return 0;
}
