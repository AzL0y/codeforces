#include <stdio.h>

/*
* Problem 263A
* 5x5 matrix, filled with zeros except a 1, return number of moves for the 1 to be in center of matrix

IN :
    int M, N;
OUT : 
    int x : number of dominoes
*/

int main() {
    int x, row, col;

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &x);
            if (x == 1) {
                row = i;
                col = j;
            }
        }
    }

    int moves = (row > 3 ? row - 3 : 3 - row)
              + (col > 3 ? col - 3 : 3 - col);

    printf("%d\n", moves);
    return 0;
}
