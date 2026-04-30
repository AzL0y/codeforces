#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
* Problem homemade
* luhn algorithm

IN :
    uint8_t[] CCnum : credit card number;
OUT :
    string "VALID" if the number is valid, "INVALID" otherwise
*/

int main() {

    uint8_t* arr = (uint8_t*)malloc(16 * sizeof(uint8_t));
    uint8_t* ccnum = (uint8_t*)malloc(16 * sizeof(uint8_t));

    if (arr == NULL || ccnum == NULL) {
        printf("Erreur d'allocation mémoire\n");
        free(arr);
        free(ccnum);
        return 1;
    }

    char buffer[17]; // 16 digits + null terminator
    if (scanf_s("%16s", buffer, (unsigned)_countof(buffer)) != 1) {
        printf("Erreur de lecture du numéro de carte\n");
        free(arr);
        free(ccnum);
        return 1;
    }

    int len = (int)strlen(buffer);
    if (len != 16) {
        printf("INVALID : le numéro de carte doit contenir exactement 16 chiffres\n");
        free(arr);
        free(ccnum);
        return 0;
    }

    // Convert characters to digits
    for (int i = 0; i < 16; i++) {
        if (buffer[i] < '0' || buffer[i] > '9') {
            printf("INVALID : caractères non numériques\n");
            free(arr);
            free(ccnum);
            return 0;
        }
        arr[i] = buffer[i] - '0';
        ccnum[i] = buffer[i] - '0';
    }

    for (int i = 0; i < 16; i += 2) {
        arr[i] = (arr[i]) * 2;
        if (arr[i] / 10) {
            arr[i] = (arr[i] % 10) + 1;
        }
    }

    for (int i = 0; i < 16; i++) {
        printf("%d : %d : %d\n", i, ccnum[i], arr[i]);
    }

    free(arr);
    free(ccnum);
    return 0;
}
