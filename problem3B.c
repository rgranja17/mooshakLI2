#include <stdio.h>

int main() {
    int N;
    char commands[21];
    int position = 5;
    int keypad[3][3] = {{7, 8, 9}, {4, 5, 6}, {1, 2, 3}};

   if (scanf ("%d", &N)) {

    for (int i = 0; i < N; i++) {
        if (scanf("%s", commands)) {

        for (int j = 0; commands[j] != '\0'; j++) { // o caractere atual não seja o caractere nulo '\0', que é utilizado para indicar o fim da string.
            switch(commands[j]) {
                case 'C':
                    if (position > 3) {
                        position -= 3;
                    }
                    break;
                case 'B':
                    if (position < 7) {
                        position += 3;
                    }
                    break;
                case 'E':
                    if (position % 3 != 1) {
                        position -= 1;
                    }
                    break;
                case 'D':
                    if (position % 3 != 0) {
                        position += 1;
                    }
                    break;
            }
        }
        }

        printf("%d", keypad[(position-1)/3][(position-1)%3]);
    }
   }
    printf("\n");

    return 0;
}
