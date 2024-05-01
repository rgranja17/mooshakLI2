#include <stdio.h>
#include <string.h>

int main() {
    int num_cases = 0;
   if (scanf("%d", &num_cases)){}

    while (num_cases--) {
        int num_candidates, i;
        char villain[101], name[101];
        if (scanf("%d %[^\n]", &num_candidates, villain)){}

        int anagram_found = 0;
        for (i = 1; i <= num_candidates; i++) {
            if (scanf(" %[^\n]", name)){}

            // Verifica se é um anagrama
            int freq_v[26] = {0};
            int freq_n[26] = {0};
            int j;
            for (j = 0; villain[j] != '\0'; j++) {
                freq_v[villain[j] - 'A']++;
            }
            for (j = 0; name[j] != '\0'; j++) {
                freq_n[name[j] - 'A']++;
            }
            int is_anagram = 1;
            for (j = 0; j < 26; j++) {
                if (freq_v[j] != freq_n[j]) {
                    is_anagram = 0;
                    break;
                }
            }
            if (is_anagram) {
                if (anagram_found) {
                    printf(" ");
                }
                printf("%d", i);
                anagram_found = 1;
            }
        }

        if (!anagram_found) {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}
