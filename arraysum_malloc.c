#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, cpt = 0;
    if (scanf_s("%d", &n) != 1) {
        printf("Erreur de lecture de la taille\n");
        return 1;
    }
    int* arr = malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Erreur d'allocation mémoire\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf_s("%d", arr + i) != 1) {
            printf("Erreur de lecture de l'élément %d\n", i);
            free(arr);
            return 1;
        }
        cpt += *(arr + i);
    }
    for (int i = 0; i < n; i++) {
        printf("%d : %d\n", i, *(arr + i));
    }
    for (int i = 0; i < n; i++) {
        printf("current cpt : %d\n", cpt);
    }

    printf("cpt final : %d\n", cpt);

    free(arr);
    return 0;
}
