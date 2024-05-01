#include <stdio.h>

int main() {
   int a, b, c;
   int read = scanf("%d %d %d", &a, &b, &c);
   if (read != 3) {
      printf("Erro na leitura dos dados!\n");
      return 1;
   }
   if (a <= b && b <= c) {        
        printf ("%d %d %d\n",a, b, c);
    }
    else if (a <= c && b >= c) {
        printf ("%d %d %d\n", a, c, b);
    }
    else if (a >= b && a <= c) {
        printf ("%d %d %d\n",b, a, c);
    
    }
    else if (c >= b && a >= c) {
        printf ("%d %d %d\n", b, c, a);
    }
    else if (c <= a && a <= b) {
        printf ("%d %d %d\n",c, a, b);
    }

    else {
        printf ("%d %d %d\n",c, b, a);
    }

    return 0;
}
