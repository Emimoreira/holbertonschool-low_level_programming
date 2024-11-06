#include <stdio.h>
#include "main.h"

/*print_chessboard - hace un tablero de ajedrez
 *@a: punterito
 * Return: 0
 */
void print_chessboard(char (*a)[8]) {
    for (int fila = 0; fila < 8; fila++) {
        for (int col = 0; col < 8; col++) {
            printf("%c ", a[fila][col]);
        }
        printf("\n"); 
    }
}

int main() {
    
    char tablero[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    print_chessboard(tablero);
    return 0;
}
