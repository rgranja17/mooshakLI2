#include <stdio.h>

// gcc -Wall -Wextra -pedantic -02 "nome ficheiro" -lm

int main() {
   int num1, num2, num3, num4, num5;
   int max = -1;
   int pos = -1;

   if (scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5)) {
      if (num1 > max) {
      max = num1; 
      pos = 1;
      }

      if (num2 > max) {
      max = num2;
      pos = 2;
      }

      if (num3 > max) {
      max = num3;
      pos = 3; 
      }

      if (num4 > max) {
      max = num4;
      pos = 4;
      }

      if (num5 > max) {
      max = num5;
      pos = 5;
      }
   }
   
   printf("%d\n", pos);
   return 0;
}



