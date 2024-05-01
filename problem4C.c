#include <stdio.h>
#include <string.h>

int main() {
    int N;
    if (scanf("%d", &N)){}

    while (N--) {
        int X;
        char notas[1001];
        if (scanf("%d %s",&X, notas)){}

        int pos = -1; // indica que ainda não encontrou uma posicao com 'X' notas distintas.
        for (size_t i = 0; i < strlen(notas) - X + 1; i++) {

            int count[26] = {0}; // array de frequencias das letras 'A' ate 'Z'
            int j;
            for (j = 0; j < X; j++) {
                int letra = notas[i+j] - 'A'; //converte num valor numerico e resulta na posicao da letra no alfabeto
                    count[letra]++;
                    if (count[letra] > 1) {
                        break; // letra repetida encontrada, sai do loop interno
                    }
            }
            if (j==X) {
                pos = i; // todas as letras sao diferentes, encontramos a posição
                break; // sai do loop externo
            }
        }

        printf("%d\n",pos);
    }

    return 0;
}

/*Esse aviso é emitido pelo compilador porque você está comparando um valor de tipo int (a variável i) 
com um valor de tipo size_t (retornado pela função strlen).
Embora isso possa funcionar corretamente em muitos casos, 
pode haver problemas em alguns cenários,
especialmente quando o valor retornado por strlen é maior do que o maior valor que pode ser 
representado por um int. Para resolver esse aviso, você pode mudar o tipo da variável i para size_t,
que é o tipo retornado por strlen e que pode representar todos os valores possíveis de um tamanho de string.*/