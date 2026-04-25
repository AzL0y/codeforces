#include <stdio.h>

/*
* Problem 158A
* n contestants, at least k places in next round, score > k-th element to advance

IN :
    int n : number of contestants, int k : index of the score to check
    n integers representing the score of each contestant, (non increasing sequence)
OUT : 
    int x : number of contestants who advance
*/

int main() {
    int n, k, x = 0;
    scanf("%d %d", &n, &k);

    int score, kth = 0;

    for (int i = 1; i <= n; i++) {
        scanf("%d", &score);

        if (i == k)
            kth = score;

        if (score > 0 && score >= kth)
            x++;
    }

    printf("%d\n", x);
    return 0;
}
