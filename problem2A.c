#include <stdio.h>

int main() {
    int num_cartas, pos_x = 0, pos_y = 0;
    if (scanf("%d", &num_cartas)) {
    
    for (int i = 0; i < num_cartas; i++) {
        int carta;
        if (scanf("%d", &carta)) {

        
        switch ((carta - 1) % 4) {
            case 0:
                pos_y--;
                break;
            case 1:
                pos_y++;
                break;
            case 2:
                pos_x--;
                break;
            case 3:
                pos_x++;
                break;
        }
        }
    }
    }
    
    printf("%d %d\n", pos_x, pos_y);
    return 0;
}

